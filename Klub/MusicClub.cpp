#include "MusicClub.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>

using namespace std;

MusicClub::MusicClub(string name, int r, string type)
{
	rating=r;
	musicType = type;
	clubName = name;
}



void MusicClub::display() 
{
	cout << " Klub  " << clubName;
	cout << " Muzyka typu:  " << musicType <<" Ocena klubu przez u¿ytkowników: " << rating << endl;
	cout << "Cz³onkowie klubu: " << endl;
	for (size_t n = 0; n<members.size(); n++)
	{
		cout << members[n];
	}
}

ostream & MusicClub::saveToFile(ostream &os) const
{
	Club::saveToFile(os);
	os << " " << musicType << " " << rating;
	return os;
}

istream & MusicClub::readFromFile(istream &is)
{
	Club::readFromFile(is);
	is >> clubName >> musicType >> rating;
	return is;
}

MusicClub::~MusicClub()
{
	members.clear();
}
