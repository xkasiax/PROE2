#include "Club.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int Club::numOfClubs = 0;

int Club::getNumOfClubs()
{
	return numOfClubs;
}

ostream & Club::saveToFile(ostream &os) const
{	
	os << typ << " ";
	os << members.size() << " ";
	for (size_t n = 0; n < members.size(); n++)
	{
		members[n].saveToFile(os);
	}
	os << clubName;
	return os;
}

istream & Club::readFromFile(istream &is)
{
	size_t N;
	is >> N;
	for (size_t n = 0; n<N; ++n)
	{
		Member m = Member();
		m.readFromFile(is);
		members.push_back(m);
	}
	return is;
}

void Club::addMember(Member &m)
{
	members.push_back(m);
}

void Club::setClubName(string cName)
{
	this->clubName = cName;
}

string Club::getClubName()
{
	return clubName;
}

void Club::setLocation(Location l)
{
	this->location = l;
}

Location Club::getLocation()
{
	return this->location;
}

void Club::setDensflor(Room r)
{
	this->room = r;
}

Room Club::getDensflor()
{
	return this->room;
}

const Member & Club::operator[](size_t index)
{
	if (index < 0 || index >= members.size())
	{	
		throw "Poza zakresem";
	}
	else
		return members[index];
}






Club::~Club()
{
	members.clear();//
	numOfClubs--;
#ifdef _DEBUG
	cout << "wywolano destruktor klasy Club" << endl;
#endif
}
