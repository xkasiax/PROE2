#pragma once

using namespace std;

enum LIGHT_MODE {ON, OFF};

class Room
{
private:
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
	~Room();
};