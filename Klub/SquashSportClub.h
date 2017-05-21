#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
#include "SportClub.h"

using namespace std;

class SquashSportClub : public SportClub
{
private:
	int numOfRackets;

public:
	SquashSportClub();
	SquashSportClub(string name, string type, int bikes, int rackets);

	virtual void display();
	virtual ostream& saveToFile(ostream&) const;
	virtual istream& readFromFile(istream&);

	~SquashSportClub();
};