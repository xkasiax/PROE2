#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
#include "Club.h"

using namespace std;

class SportClub : public Club
{
protected:
	string sportType;
	int numOfBikes;

public:
	SportClub();
	SportClub(string name, string type, int bikes);

	virtual void display();
	virtual ostream& saveToFile(ostream&) const;
	virtual istream& readFromFile(istream&);

	~SportClub();
};