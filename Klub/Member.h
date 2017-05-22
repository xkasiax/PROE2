#pragma once
#include <string>

using namespace std;

enum Sex {FEMALE, MALE};
///Klasa tworzaca obiekt osoby mogacej zapisac sie do klubu
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

	ostream& saveToFile(ostream&) const;
	istream& readFromFile(istream&);

	///przeciazony operator strumieniowy sluzacy wypisywaniu informacji o osobie
	friend ostream& operator << (ostream &s, Member &m);
	
	~Member();
};