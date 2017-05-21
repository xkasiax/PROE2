// Klub.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Club.h"
#include "MusicClub.h"
#include "SportClub.h"
#include "SquashSportClub.h"
#include "Room.h"
#include "Location.h"
#include "Member.h"
#include <iostream>
#include <fstream>

using namespace std;

char tworzenieKlubu() {
	char var;
	cout << "---------- Witaj Wlascicielu! Stworz swoj wlasny klub ----------" << endl;
	while (true) {

		cout << " (1) Stworz/Dodaj Klub Muzyczny" << endl;
		cout << " (2) Stworz/Dodaj Klub Sportowy" << endl;
		cout << " (3) Stworz/Dodaj Klub Sportowy z sal¹ do squasha" << endl;
		cout << endl << "     Wybrana opcja: ";
		cin >> var;
		cin.get();

		if (var == '1' || var == '2' || var == '3') {
			cout << "--------------------------------------------" << endl << endl;
			return var;
		}
		else
			cout << " Wprowadzono bledna wartosc!" << endl << endl;
	}
}

int main()
{	
	vector <Club*> clubs;
	string clubName;
	int rating;
	string musicType, sportType;
	int bikes, rackets;

	while (true)
	{
		char var;
		cout << "Witaj w systemie zarzadzania klubami. Wybierz czynnosc, ktora chcesz wykonac:" << endl;
		cout << " (1) Otwarcie nowego klubu" << endl;
		cout << " (2) Zapisz czlonka do klubu" << endl;
		cout << " (3) Usun klub " << endl;
		cout << " (4) Zapis do pliku .txt" << endl;
		cout << " (5) Odczyt z pliku .txt" << endl;
		cout << " (6) Wypisz kluby" << endl;
		cout << " (7) Wyjscie" << endl;
		cout << endl << "     Wybrana opcja: ";
		cin >> var;
		cin.get();

		if (var == '1')
		{
			cout << "--------------------------------------------" << endl << endl;
			char temp = tworzenieKlubu();
			switch (temp)
			{

			case '1':
			{
				cout << "----------- Wybrales Tworzenie Klubu Muzycznego -----------" << endl;
				cout << "Podaj jego parametry" << endl;
				cout << "Nazwa klubu: " << endl;
				while (!(cin >> clubName))
				{
					cout << "Podales zly typ zmiennej" << endl;
					cin.clear(); //kasowanie flagi b³êdu strumienia
					cin.sync(); //kasowanie zbêdnych znaków z bufora
				}
				cout << "Ocena uzytkownikow: " << endl;
				while (!(cin >> rating))
				{
					cout << "Podales zly typ zmiennej" << std::endl;
					cin.clear(); //kasowanie flagi b³êdu strumienia
					cin.sync(); //kasowanie zbêdnych znaków z bufora
				}
				cout << "Podaj typ muzyki: " << endl;
				while (!(cin >> musicType))
				{
					cout << "Podales zly typ zmiennej" << std::endl;
					cin.clear(); //kasowanie flagi b³êdu strumienia
					cin.sync(); //kasowanie zbêdnych znaków z bufora
				}
				clubs.push_back(new MusicClub(clubName, rating, musicType));
				break;
			}
			case '2':
			{
				cout << "----------- Wybrales Tworzenie Klubu Sportowego -----------" << endl;
				cout << "Podaj jego parametry" << endl;
				cout << "Nazwa klubu: " << endl;
				while (!(cin >> clubName))
				{
					cout << "Podales zly typ zmiennej" << endl;
					cin.clear(); //kasowanie flagi b³êdu strumienia
					cin.sync(); //kasowanie zbêdnych znaków z bufora
				}
				cout << "Dyscyplina sportu: " << endl;
				while (!(cin >> sportType))
				{
					cout << "Podales zly typ zmiennej" << std::endl;
					cin.clear(); //kasowanie flagi b³êdu strumienia
					cin.sync(); //kasowanie zbêdnych znaków z bufora
				}
				cout << "Podaj liczbe rowerow:" << endl;
				while (!(cin >> bikes))
				{
					cout << "Podales zly typ zmiennej" << std::endl;
					cin.clear(); //kasowanie flagi b³êdu strumienia
					cin.sync(); //kasowanie zbêdnych znaków z bufora
				}
				clubs.push_back(new SportClub(clubName, sportType, bikes));
				break;
			}
			case '3':
			{
				cout << "----------- Wybrales Tworzenie Klubu Sportowego do squasha -----------" << endl;
				cout << "Podaj jego parametry" << endl;
				cout << "Nazwa klubu: " << endl;
				while (!(cin >> clubName))
				{
					cout << "Podales zly typ zmiennej" << endl;
					cin.clear(); //kasowanie flagi b³êdu strumienia
					cin.sync(); //kasowanie zbêdnych znaków z bufora
				}
				cout << "Podaj liczbe rowerow:" << endl;
				while (!(cin >> bikes))
				{
					cout << "Podales zly typ zmiennej" << std::endl;
					cin.clear(); //kasowanie flagi b³êdu strumienia
					cin.sync(); //kasowanie zbêdnych znaków z bufora
				}
				cout << "Liczba dostêpnych rakiet: " << endl;
				while (!(cin >> rackets))
				{
					cout << "Podales zly typ zmiennej" << std::endl;
					cin.clear(); //kasowanie flagi b³êdu strumienia
					cin.sync(); //kasowanie zbêdnych znaków z bufora
				}
				clubs.push_back(new SquashSportClub(clubName, "squash", bikes, rackets));
				break;
			}
			}
		}
		else if (var == '2')
		{
			cout << "----------- Jestes w trybie dodawania cz³onka do Klubu -----------" << endl;
			cout << "Wprowadz nr klubu, do ktorego chcesz zapisac czlonka: " << endl;
			size_t N = clubs.size();
			for (size_t n = 0; n < N; ++n)
			{
				cout << "(" << n << ")" << clubs[n]->getClubName() << endl;
			}
		}
		else if (var == '4')
		{
			//zapis
			fstream file;

			file.open("dane.txt", ios::out);//
			if (file.is_open())
			{
				string data;
				cout << "otwarto plik" << endl;
				//getline(file, data); //wczytanie CA£EGO jednego wiersza danych
				//plik << kolekcja << endl; //zapis
			}
			else
				cout << "Blad otwarcia pliku";
			file.close();
		}
		else if (var == '5')
		{
			//odczyt z pliku

		}

		else if (var == '6')
		{
			//wypisywanie
		}
		else if (var == '7')
		{
			return 0;
		}
		else
			cout << "Wybrano zla wartosc. Wpisz ponownie poprawna wartosc" << endl << endl;


		//MusicClub c1;
		//c1.setClubName("Malina");
		//c1.setLocation(Location("Poland", "Warsaw", "Sezamkowa", 88));
		//Member m("Jan", "Nowak", 22, MALE);
		//c1.addMember(m);
		//c1.display();

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




		getchar(); //aby sie nie zamykalo
		//return 0;
	}
}

