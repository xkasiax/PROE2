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
	SquashSportClub(string name, int var) : SportClub(name) 
	{
		var = 0;
	};

	virtual void display();
	virtual ostream& saveToFile(ostream&) const;
	virtual istream& readFromFile(istream&);

	~SquashSportClub();
};