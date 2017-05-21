#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
#include "SportClub.h"

using namespace std;

SportClub::SportClub()
{
	sportType = "";
	numOfBikes = 0;
	clubName = "";
}

SportClub::SportClub(string name, string type, int bikes)
{
	clubName = name;
	sportType = type;
	numOfBikes = bikes;
}

void SportClub::display()
{
	cout << "Klub sportowy o nazwie: " + clubName + ", kt�ry specjalizuje si� w dyscyplinie: " + sportType + "oraz posiada " + to_string(numOfBikes) + " rower�w" << endl;
	for (size_t n = 0; n<members.size(); n++)
	{
		cout << members[n];
	}
}

ostream & SportClub::saveToFile(ostream &os) const
{
	Club::saveToFile(os);
	os << " " << sportType << " " << numOfBikes;
	return os;
}

istream & SportClub::readFromFile(istream &is)
{
	is >> clubName >> sportType >> numOfBikes;
	return is;
}

SportClub::~SportClub()
{
}
