#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
#include "Club.h"

using namespace std;
///Klasa dziedziczaca po klasie Club - Klub Muzyczny
class MusicClub : public Club
{
private:
	int rating;///<zmienna przechowujaca ocene klubu typu int
	string musicType;///<zmianna przechowujaca typ muzyki typu string
	
	
public:
	MusicClub(string name, int r, string type);
	MusicClub() { typ = 0; };
	virtual void display();
	virtual ostream& saveToFile(ostream&) const;
	virtual istream& readFromFile(istream&);

	~MusicClub();
};