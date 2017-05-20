#pragma once
#include <string>

using namespace std;

enum Sex {FEMALE, MALE};

class Member
{
private:
	string name;
	string surname;
	int age;
	Sex sex;

public:
	
	Member();
	Member(string n, string s, int a, Sex x);

	operator string() const;
	//bool operator == (const Member &m);
	
	//virtual void display();
	ostream& saveToFile(ostream&) const;
	istream& readFromFile(istream&);

	friend ostream& operator << (ostream &s, Member &m);
	friend bool operator==(const Member &m1, const Member &m2);
	~Member();
};