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
	vector <Member> members;
	string sportType;
	int numOfBikes;

public:
	SportClub();
	SportClub(string name);

	virtual void display() const;
	virtual ostream& saveToFile(ostream&) const;
	virtual istream& readFromFile(istream&);

	~SportClub();
};