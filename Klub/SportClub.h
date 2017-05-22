#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
#include "Club.h"

using namespace std;
///Klasa dziedziczaca po klasie Club - Klub Sportowy
class SportClub : public Club
{
protected:
	string sportType;///<typ sportu
	int numOfBikes;///<liczba rowerow

public:
	///Konstruktor domyslny
	SportClub();
	///Konstruktor z parametrami
	/**
	\param name to nazwa klubu
	\param type to typ sportu w danym klubie
	\param bikes okresla liczbe rowerow dostepnych w klubie
	*/
	SportClub(string name, string type, int bikes);

	virtual void display();
	virtual ostream& saveToFile(ostream&) const;
	virtual istream& readFromFile(istream&);

	~SportClub();
};