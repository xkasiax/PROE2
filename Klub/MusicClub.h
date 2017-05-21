#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
#include "Club.h"

using namespace std;

class MusicClub : public Club
{
private:
	int rating;
	string musicType;
	
public:
	MusicClub(string name, int r, string type);

	virtual void display();
	virtual ostream& saveToFile(ostream&) const;
	virtual istream& readFromFile(istream&);

	~MusicClub();
};