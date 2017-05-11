#include "Club.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int Club::numOfClubs = 0;

int Club::getNumOfClubs()
{
	return numOfClubs;
}


void Club::setClubName(string cName)
{
	this->clubName = cName;
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

const Member & Club::operator[](int index)
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
