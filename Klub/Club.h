#pragma once
#include "Location.h"
#include "Member.h"
#include "Room.h"
#include <vector>

///Klasa bazowa - abstrakcyjna
class Club
{
private:
	static int numOfClubs;
	
protected:
	vector <Member> members;///<wektor przechowujacy obiekty klasy Member
	string clubName;///<przechowuje nazwe klubu
	Location location;
	Room room;
	int typ;///<zmienna okrealajaca typ klubu sluzaca poprawnemu wczytaniu obiektu z pliku 

public:
	
	///funkcja wirtualna abstrakcyjna sluzaca prezentacji wykorzystania polimorfizmu
	virtual void display() = 0;
	/*!funkcja wirtualna sluzaca zapisowi obiektu do pliku
	\param obiekt klasy ostream
	\return obiekt klasy ostream
	*/
	virtual ostream& saveToFile(ostream&) const;
	virtual istream& readFromFile(istream&); ///funkcja wirtualna sluzaca odczytowi obiektu z pliku
	/*!
	funkcja dodajaca obiekt klasy Member do wektora members obiektu danego klubu
	\param obiekt klasy Member
	*/
	void addMember(Member & m);

	static int getNumOfClubs();
	void setClubName(string cName);
	string getClubName();
	void setLocation(Location l);
	Location getLocation();
	void setDensflor(Room r);
	Room getDensflor();
	const Member& operator[](size_t index);
	
	virtual ~Club();///Destruktor wirtualny
};