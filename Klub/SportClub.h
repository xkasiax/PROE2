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
private:
	string sportType;
	int numOfBikes;

public:
	SportClub();
	SportClub(string name);

	virtual void display();
	virtual ostream& saveToFile(ostream&) const;
	virtual istream& readFromFile(istream&);

	~SportClub();
};