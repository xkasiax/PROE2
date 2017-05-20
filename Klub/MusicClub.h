#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
#include "Club.h"

using namespace std;

class MusicClub : public Club
{
private:
	int rating;
	string musicType;
	string clubName;
	//vector <Member> members;
	
public:
	MusicClub();
	//virtual void addMember(Member & m);
	//virtual void addMember(string, string, int, Sex);
	virtual void display();
	virtual ostream& saveToFile(ostream&) const;
	virtual istream& readFromFile(istream&);

	~MusicClub();
};