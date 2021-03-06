#include "Room.h"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void Room::lightOFF()
{
	this->lightMode = OFF;
}

void Room::lightON()
{
	this->lightMode = ON;
}

int Room::getArea()
{
	return this->area;
}

Room Room::operator+(const Room &d)
{
	Room sum;
	sum.area = this->area + d.area;
	return sum;
}

Room Room::operator++(int)
{
	Room tmp(*this); // copy
	area++; // pre-increment
	return tmp;   // return old value
}



Room::Room()
{
	width = 0;
	height = 0;
	area = 0;
	lightMode = OFF;
}

Room::Room(int w, int h)
{
	width = w;
	height = h;
	area = width * height;
	lightMode = OFF;

}

ostream & Room::saveToFile(ostream &os) const
{
	// TODO: insert return statement here
	return os;
}

istream & Room::readFromFile(istream &is)
{
	return is;
}

ostream & operator<<(ostream &s, Room &r)
{
	s << endl << "Pomieszczenie o wymiarach:  " << r.width << " x " << r.height << " Powierzchnia: " << r.area << endl;
	//s << "Stan �wiat�a: " << lightMode;
	return s;
}

Room::~Room()
{

}
