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

SportClub::SportClub(string name)
{
	clubName = name;
	sportType = "";
	numOfBikes = 0;
}

void SportClub::display()
{
	cout << "Klub sportowy o nazwie: " + clubName + ", który specjalizuje siê w dyscyplinie: " + sportType + "oraz posiada " + to_string(numOfBikes) + " rowerów" << endl;
	for (size_t n = 0; n<members.size(); n++)
	{
		cout << members[n];
	}
}

ostream & SportClub::saveToFile(ostream &os) const
{
	return os;
}

istream & SportClub::readFromFile(istream &is)
{
	return is;
}

SportClub::~SportClub()
{
}
