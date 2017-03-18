#pragma once
#include "Location.h"
#include "Member.h"
#include "Densflor.h"

class Club
{
private:
	static int numOfClubs;
	Location location;
	Densflor densflor;
	Member *members;
	string clubName;
	int memberNum;

public:
	static int getNumOfClubs();
	void addMember(string, string, int, Sex);
	void setClubName(string cName);
	void setLocation(Location l);
	Location getLocation();
	void setDensflor(Densflor d);
	Densflor getDensflor();

	const Member& operator[](int index); 
	Club& operator = (const Club &c);
	bool operator == (const Club &c);

	Club();
	Club(const Club &c);

	~Club();
};