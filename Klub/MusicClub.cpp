#include "MusicClub.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>

using namespace std;

MusicClub::MusicClub()
{
	rating=0;
	musicType = "";
	clubName = "";
}



void MusicClub::display() 
{
	Club::display();
	cout << " Muzyka typu:  " << musicType <<" Ocena klubu przez u¿ytkowników: " << rating << endl;
}

ostream & MusicClub::saveToFile(ostream &os) const
{
	Club::saveToFile(os);
	os << " " << musicType << " " << rating << " ";

	return os;
}

istream & MusicClub::readFromFile(istream &is)
{
	size_t N;
	is >> N;
	for (size_t n = 0; n<N; ++n)
	{
		Member m = Member();
		m.readFromFile(is);
		members.push_back(m);
	}
	is >> clubName >> musicType >> rating;
	
	return is;
}

MusicClub::~MusicClub()
{
	members.clear();
}
