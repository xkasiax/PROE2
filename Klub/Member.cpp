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
