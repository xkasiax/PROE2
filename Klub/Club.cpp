#include "Club.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int Club::numOfClubs = 0;

int Club::getNumOfClubs()
{
	return numOfClubs;
}

void Club::addMember(string name, string surname, int age, Sex sex)
{
	Member newMember = Member(name, surname, age, sex);
	members.push_back(newMember);
	/*
	Member *temp = new Member[memberNum+1];
	for (int i = 0; i<memberNum; i++)
		temp[i] = members[i];   // kopiowanie elementu z poprzedniej tablicy

	delete[] members;
	members = temp;
	members[memberNum] = newMember;
	*/
	memberNum++;
	cout << "rozmiar members" << members.size() << endl;
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

void Club::setDensflor(Densflor d)
{
	this->densflor = d;
}

Densflor Club::getDensflor()
{
	return this->densflor;
}

const Member & Club::operator[](int index)
{
	if (index < 0 || index >= memberNum)
	{	
		throw "Poza zakresem";
	}
	else
		return members[index];
}
/*
Club & Club::operator=(const Club & c)
{
	if (c.members != (this->members))
	{
		delete[] members;
		clubName = c.clubName;
		location = c.location;
		densflor = c.densflor;
		memberNum = c.memberNum;

		if (c.members != nullptr)
		{
			members = new Member[memberNum];
			for (int i = 0; i < memberNum; i++)
			{
				members[i] = c.members[i];
			}
		}
		else
		{
			members = nullptr;
		}

		return *this;
	}
}
*/
bool Club::operator==(const Club & c)
{
	if (c.clubName == clubName && location == c.location) 
		return true;
	else
	{
		return false;
	}
}

Club::Club()
{
	memberNum = 0;
	//members = nullptr;
	members.clear(); //
	location = Location();
	densflor = Densflor();
	numOfClubs++;

#ifdef _DEBUG
	cout << "wywolano konstruktor klasy Club" << endl;
#endif

}
/*
Club::Club(const Club & c) // konstruktor kopiujacy
{
	memberNum = c.memberNum;
	clubName = c.clubName;
	location = c.location;
	densflor = c.densflor;
	if (c.members != nullptr)
	{
		members = new Member[memberNum]; 
		for (int i = 0; i < memberNum; i++)
		{
			members[i] = c.members[i];
		}
	}
	else 
	{
		members = nullptr;
	}

	numOfClubs++;

#ifdef _DEBUG
	cout << "wywolano konstruktor kopiujacy klasy Club" << endl;
#endif
}
*/

Club::~Club()
{
	members.clear();//
	numOfClubs--;
#ifdef _DEBUG
	cout << "wywolano destruktor klasy Club" << endl;
#endif
}
