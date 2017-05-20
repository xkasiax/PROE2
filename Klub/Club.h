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

public:
	virtual bool makeReservation() = 0;
	virtual void display();
	virtual ostream& saveToFile(ostream&) const;
	virtual istream& readFromFile(istream&); 
	void addMember(Member & m);

	static int getNumOfClubs();
	void setClubName(string cName);
	void setLocation(Location l);
	Location getLocation();
	void setDensflor(Room r);
	Room getDensflor();
	const Member& operator[](size_t index);
	//Club& operator = (const Club &c);

	virtual ~Club();
};