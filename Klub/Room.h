#pragma once
#include <cstdlib>
#include <iostream>
using namespace std;

enum LIGHT_MODE {ON, OFF};
///Klasa z informacjami o pomieszczeniu
class Room
{
	LIGHT_MODE lightMode;
	int width;
	int height;
	int area;

public:

	void lightOFF();
	void lightON();
	int getArea();

	Room operator+(const Room & d);
	Room operator++(int); //postinkrementacja
	Room();
	Room(int w, int h);

	ostream& saveToFile(ostream&) const;
	istream& readFromFile(istream&);
	friend ostream& operator << (ostream &s, Room &r);

	~Room();
};