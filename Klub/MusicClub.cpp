#include "MusicClub.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>

using namespace std;

MusicClub::MusicClub()
{

}

void MusicClub::addMember(Member &m)
{
	//Member newMember = Member(name, surname, age, sex);
	members.push_back(m);
	//cout << "rozmiar members" << members.size() << endl;
}

void MusicClub::display() 
{
	cout << " Klub  " << clubName << " z muzyk¹ typu:  " << musicType <<". Ocena klubu przez u¿ytkowników: " << rating << endl;
	
	for (int n = 0; n<members.size(); n++)
	{
		cout << members[n];
	}
}

ostream & MusicClub::saveToFile(ostream &os) const
{
	os << clubName << " " << musicType << " " << rating << " ";
	os << members.size() << " ";
	for (int n = 0; n < members.size(); n++)
	{
		members[n].saveToFile(os);
	}
	return os;
}

istream & MusicClub::readFromFile(istream &is)
{
	is >> clubName >> musicType >> rating;
	size_t N;
	is >> N;
	for (std::size_t n = 0; n<N; ++n)
	{
		Member m = Member();
		m.readFromFile(is);
		members.push_back(m);
	}
	return is;
}

MusicClub::~MusicClub()
{
	members.clear();
}
