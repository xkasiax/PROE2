// Klub.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Club.h"
#include "Densflor.h"
#include "Location.h"
#include "Member.h"
#include <iostream>

using namespace std;


void testOpPorClub(Club c1, Club c2)
{
	if (c1 == c2)
		cout << "To ten sam klub" << endl;
	else
		cout << "Porownywane kluby sa rozne." << endl;

}

void testOpPorMember(Club c1, Club c2)
{
	Member mem = Member("Kasia", "Sidlo", 22, FEMALE);
	if ( mem == c2[2])
		cout << "To ta sama osoba" << endl;
	else
		cout << "Porownywane osoby sa rozne." << endl;

	if ( c2[3]==c1[1])
		cout << "To ta sama osoba" << endl;
	else
		cout << "Porownywane osoby sa rozne." << endl;
}

void testOpIdx(Club club)
{
	Member m = club[0];
	cout << "Przeciazony operator indeksowania + operator strumienia dla obiektu klasy Member " << m << endl;;
	cout << "Przeciazony operator konwersji obiektu klasy Member na typ string " << endl <<(string)club[1] << endl;

}

void testOpSumDensflors(Club c1, Club c2)
{
	Densflor d = Densflor(20, 40);
	Densflor d2 = c1.getDensflor();
	Densflor sumD = d + d2;
	
	cout << "Powierzchnia 1. parkietu " << d.getArea() << endl;
	cout << "Powierzchnia 2. parkietu " << d2.getArea() << endl;
	cout << "Powierzchnia laczna parkietu " << sumD.getArea() << endl;
}

void testOpIncrement(Densflor d)
{
	cout << d.getArea() << endl;
	d++;
	cout << "Wartosc po inkrementacji: " << d.getArea() << endl;
}

void testOpLocation(Club c)
{
	Location loc = Location("USA", "New York", "Sezamkowa", 88);
	if (loc == c.getLocation())
		cout << loc << "i" << c.getLocation() << " to to samo miejsce" << endl;
	else
		cout << loc << "i" << c.getLocation() << " sa rozne" << endl;
}

int main()
{	
	Club c1, c2;

	c1.addMember("Jan", "Nowak", 22, MALE);
	c1.addMember("John", "Smith", 18, MALE);
	c1.setClubName("Malina");
	c1.setLocation(Location("Poland", "Warsaw", "Sezamkowa", 88));
	c1.setDensflor(Densflor(12, 20));

	c2.addMember("Anna", "Kot", 25, FEMALE);
	c2.addMember("Stas", "Polski", 28, MALE);
	c2.addMember("Basia", "Nowa", 21, FEMALE);
	c2.addMember("John", "Smith", 18, MALE);
	c2.setClubName("Je¿yna");
	c2.setLocation(Location("Poland", "Warsaw", "Marmurkowa", 64));
	c1.setDensflor(Densflor(24, 15));

	testOpPorClub(c1, c2);
	testOpPorMember(c1, c2);
	testOpIdx(c1);
	testOpSumDensflors(c1, c2);
	testOpIncrement(c1.getDensflor());
	testOpLocation(c2);

	cout << "Liczba wszystkich klubow: " << Club::getNumOfClubs() << endl;


	int i;
	cin >> i; //aby sie nie zamykalo
    return 0;
}

