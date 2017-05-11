#pragma once
#include "Location.h"
#include "Member.h"
#include "Room.h"
#include <vector>

class Club
{
private:
	static int numOfClubs;
	Location location;
	Room room;
	
	string clubName;


public:
	virtual bool makeReservation() = 0;
	virtual void display() const = 0;
	virtual ostream& saveToFile(ostream&) const = 0;
	virtual istream& readFromFile(istream&) = 0; 
	virtual void addMember(string, string, int, Sex) = 0;

	static int getNumOfClubs();
	void setClubName(string cName);
	void setLocation(Location l);
	Location getLocation();
	void setDensflor(Room r);
	Room getDensflor();
	const Member& operator[](int index); 
	//Club& operator = (const Club &c);
	bool operator == (const Club &c);

	virtual ~Club();
};