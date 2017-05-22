#include "Member.h"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

Member::Member()
{
	name = "";
	surname = "";
	age = 0;
	sex = MALE; 
}


Member::Member(string n, string s, int a, Sex x)
{
	name = n;
	surname = s;
	age = a;
	sex = x;
	
}

Member::operator string() const
{
	string s;
	if (sex == 0)
		s = "FEMALE";
	else
		s = "MALE";
	return name + "_" + surname + "_" + to_string(age) + "_" + s;
}



ostream& operator << (ostream &s, Member &m)
{	
	string sex;
	if (m.sex == 0)
		sex = "FEMALE";
	else
		sex = "MALE";
	s << endl << "Dane czlonka klubu: " << m.name << " " << m.surname << " Wiek: " << m.age << " Plec: " << sex << endl;
	return s;
}



ostream & Member::saveToFile(ostream &os) const
{
	os << name << " " << surname << " " << age << endl;
	return os;
}

istream & Member::readFromFile(istream &is)
{
	is >> name >> surname >> age;
	return is;
}

Member::~Member()
{

}
