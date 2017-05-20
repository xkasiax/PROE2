#include "SquashSportClub.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>

using namespace std;

SquashSportClub::SquashSportClub()
{

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

	return os;
}

istream & SquashSportClub::readFromFile(istream &is)
{
	return is;
}

SquashSportClub::~SquashSportClub()
{
}
