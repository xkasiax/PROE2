#include "SquashSportClub.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>

using namespace std;

SquashSportClub::SquashSportClub()
{
	sportType = "squash";
	typ = 2;
}

SquashSportClub::SquashSportClub(string name, string type, int bikes, int rackets) : SportClub(name, type, bikes)
{
	numOfRackets = rackets;
	typ = 2;
}

void SquashSportClub::display()
{
	cout << "Klub squasha o nazwie: " + clubName + " i liczbie rakiet: " + to_string(numOfRackets) << endl;
	size_t N = members.size();
	for (size_t n = 0; n<N; ++n)
	{
		cout << members[n];
	}
}

ostream & SquashSportClub::saveToFile(ostream &os) const
{
	SportClub::saveToFile(os);
	os << " " << numOfRackets;
	return os;
}

istream & SquashSportClub::readFromFile(istream &is)
{
	SportClub::readFromFile(is);
	is >> numOfRackets;
	return is;
}

SquashSportClub::~SquashSportClub()
{
}
