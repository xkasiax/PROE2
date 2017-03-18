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

#ifdef _DEBUG
	cout << "wywolano konstruktor klasy Member" << endl;
#endif
}


Member::Member(string n, string s, int a, Sex x)
{
	name = n;
	surname = s;
	age = a;
	sex = x;
	
#ifdef _DEBUG
	cout << "wywolano konstruktor z parametrem klasy Member" << endl;
#endif
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

bool Member::operator==(const Member & m)
{	
	if (m.name == name && m.surname == surname && m.age == age && m.sex == sex)
		return true;
	else
		return false;
}

bool operator==(const Member & m1, const Member & m2)
{
	if (m1.name == m2.name && m1.surname == m2.surname && m1.age == m2.age && m1.sex == m2.sex)
		return true;
	else
		return false;
}

ostream& operator << (ostream &s, Member &m)
{
	s << endl << m.name << " " << m.surname << " Age: " << m.age << endl;
	return s;
}


Member::~Member()
{
#ifdef _DEBUG
	cout << "wywolano destruktor klasy Member" << endl;
#endif
}
