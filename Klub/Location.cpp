#include "Location.h"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

Location::Location()
{
	street, city, country = "";
	buildingNum = 0;
#ifdef _DEBUG
	cout << "wywolano konstruktor klasy Location" << endl;
#endif
}

Location::Location(string ct, string c, string s, int bnum)
{
	country = ct;
	city = c;
	street = s;
	buildingNum = bnum;
}

ostream & Location::saveToFile(ostream &os) const
{
	os << street << " " << buildingNum << " " << city << " " << country <<endl;
	return os;
}

istream & Location::readFromFile(istream &is)
{
	is >> street >> buildingNum >> city >> country;
	return is;
}

bool Location::operator==(const Location & l)
{
	if (l.street == street && l.city == city && l.country == country && l.buildingNum == buildingNum)
		return true;
	else
	{
		return false;
	}
	
}

Location::~Location()
{
#ifdef _DEBUG
	cout << "wywolano destruktor klasy Location" << endl;
#endif
}

ostream & operator<<(ostream & s, Location & l)
{
	s << endl << "Adres klubu: " << l.street << " " << l.buildingNum << ", " << l.city << ", " << l.country << endl;
	return s;
}
