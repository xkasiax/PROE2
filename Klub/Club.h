#pragma once
#include "Location.h"
#include "Member.h"
#include "Room.h"
#include <vector>

class Club
{
private:
	static int numOfClubs;
	
protected:
	vector <Member> members;
	string clubName;
	Location location;
	Room room;
	int typ;

public:
	
	virtual void display() = 0;
	virtual ostream& saveToFile(ostream&) const;
	virtual istream& readFromFile(istream&); 
	void addMember(Member & m);

	static int getNumOfClubs();
	void setClubName(string cName);
	string getClubName();
	void setLocation(Location l);
	Location getLocation();
	void setDensflor(Room r);
	Room getDensflor();
	const Member& operator[](size_t index);

	virtual ~Club();
};