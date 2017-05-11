#include "Room.h"
#include <cstdlib>
#include <iostream>

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
	Room sum ;
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

#ifdef _DEBUG
	cout << "wywolano konstruktor klasy Room" << endl;
#endif
}

Room::Room(int w, int h)
{
	width = w;
	height = h;
	area = width * height;
	lightMode = OFF;

#ifdef _DEBUG
	cout << "wywolano konstruktor z parametrem klasy Room" << endl;
#endif
}

Room::~Room()
{
#ifdef _DEBUG
	cout << "wywolano destruktor klasy Room" << endl;
#endif
}
