// Klub.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Club.h"
#include "Room.h"
#include "Location.h"
#include "Member.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{	
	/*
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
	c2.setClubName("Jezyna");
	c2.setLocation(Location("Poland", "Warsaw", "Marmurkowa", 64));
	c1.setDensflor(Densflor(24, 15));
	*/

	//testOpPorClub(c1, c2);
	//testOpPorMember(c1, c2);
	//testOpIdx(c1);
	//testOpSumDensflors(c1, c2);
	//testOpIncrement(c1.getDensflor());
	//testOpLocation(c2);

	fstream file;

	file.open("dane.txt", ios::in | ios::out);//
	if (file.is_open())
	{
		string data;
		getline(file, data); //wczytanie CA£EGO jednego wiersza danych
		//plik << kolekcja << endl; //zapis
	}
	else
		cout << "Blad otwarcia pliku";
	file.close();


	cout << "Liczba wszystkich klubow: " << Club::getNumOfClubs() << endl;

	getchar(); //aby sie nie zamykalo
    return 0;
}

