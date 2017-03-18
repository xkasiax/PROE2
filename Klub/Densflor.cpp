#include "Densflor.h"
#include <cstdlib>
#include <iostream>

using namespace std;

void Densflor::lightOFF()
{
	this->lightMode = OFF;
}

void Densflor::lightON()
{
	this->lightMode = ON;
}

int Densflor::getArea()
{
	return this->area;
}

Densflor& Densflor::operator+(const Densflor &d)
{
	Densflor sum;
	sum.area = this->area + d.area;
	return sum;
}

Densflor Densflor::operator++(int)
{
	Densflor tmp(*this); // copy
	area++; // pre-increment
	return tmp;   // return old value
}

Densflor::Densflor()
{
	width = 0;
	height = 0;
	area = 0;
	lightMode = OFF;

#ifdef _DEBUG
	cout << "wywolano konstruktor klasy Densflor" << endl;
#endif
}

Densflor::Densflor(int w, int h)
{
	width = w;
	height = h;
	area = width * height;
	lightMode = OFF;

#ifdef _DEBUG
	cout << "wywolano konstruktor z parametrem klasy Densflor" << endl;
#endif
}

Densflor::~Densflor()
{
#ifdef _DEBUG
	cout << "wywolano destruktor klasy Densflor" << endl;
#endif
}
