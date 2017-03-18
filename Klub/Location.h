#pragma once
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Location
{
private:
	string street, city, country;
	int buildingNum;

public:
	
	Location();
	Location(string ct, string c, string s, int bnum);

	friend ostream& operator << (ostream &s, Location &l);
	bool operator == (const Location &l);

	~Location();
};