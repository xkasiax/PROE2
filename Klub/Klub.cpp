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
#include <map>

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

	cout << "Witaj w systemie zarzadzania klubami. Wybierz czynnosc, ktora chcesz wykonac:" << endl;
	while (true)
	{
		char var;
		
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
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
				cout << "Ocena uzytkownikow: " << endl;
				while (!(cin >> rating))
				{
					cout << "Podales zly typ zmiennej" << std::endl;
					cin.clear(); 
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
				cout << "Podaj typ muzyki: " << endl;
				while (!(cin >> musicType))
				{
					cout << "Podales zly typ zmiennej" << std::endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
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
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
				cout << "Dyscyplina sportu: " << endl;
				while (!(cin >> sportType))
				{
					cout << "Podales zly typ zmiennej" << std::endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
				cout << "Podaj liczbe rowerow:" << endl;
				while (!(cin >> bikes))
				{
					cout << "Podales zly typ zmiennej" << std::endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
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
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
				cout << "Podaj liczbe rowerow:" << endl;
				while (!(cin >> bikes))
				{
					cout << "Podales zly typ zmiennej" << std::endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
				cout << "Liczba dostepnych rakiet: " << endl;
				while (!(cin >> rackets))
				{
					cout << "Podales zly typ zmiennej" << std::endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
				clubs.push_back(new SquashSportClub(clubName, "squash", bikes, rackets));
				break;
			}
			}
		}
		else if (var == '2')
		{
			string n, s;
			int a;
			

			cout << "----------- Jestes w trybie dodawania cz³onka do Klubu -----------" << endl;
			size_t N = clubs.size();
			if (N == 0)
			{
				cout << "Brak klubow, do ktorych mozna sie zapisac. Stworz najpierw klub!" << endl;
			}
			else {
				cout << "Wprowadz dane osobowe: " << endl;
				cout << "Imie: " << endl;
				while (!(cin >> n))
				{
					cout << "Podales zly typ zmiennej" << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
				cout << "nazwisko: " << endl;
				while (!(cin >> s))
				{
					cout << "Podales zly typ zmiennej" << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
				cout << "wiek: " << endl;
				while (!(cin >> a))
				{
					cout << "Podales zly typ zmiennej" << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
				cout << "plec: (FEMALE/MALE) " << endl;

				map<string, Sex> m;
				m["FEMALE"] = FEMALE;
				m["MALE"] = MALE;

				string ssex;
				cin >> ssex;
				Sex x = m[ssex];

				Member member(n, s, a, x);

				cout << "Wprowadz nr klubu, do ktorego chcesz zapisac czlonka: " << endl;
				size_t N = clubs.size();
				for (size_t n = 0; n < N; ++n)
				{
					cout << "(" << n << ")" << clubs[n]->getClubName() << endl;
				}
				cout << "Indeks wybranego klubu: " << endl;
				int index;
				while (!(cin >> index)|| index <0 ||index>=N)
				{
					cout << "Podales zly typ zmiennej lub indeks spoza zakresu" << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
				
				clubs[index]->addMember(member);
				cout << "Dodano czlonka do wybranego klubu" << endl;
			}
			
		}
		else if (var == '3')
		{
			size_t N = clubs.size();
			if (N == 0)
			{
				cout << "Brak klubow do usuniecia" << endl;
			}
			else
			{
				cout << "Wprowadz nr klubu, ktory chcesz usunac: " << endl;
				size_t N = clubs.size();
				for (size_t n = 0; n < N; ++n)
				{
					cout << "(" << n << ")" << clubs[n]->getClubName() << endl;
				}
				cout << "Indeks wybranego klubu: " << endl;
				int index;
				while (!(cin >> index))
				{
					cout << "Podales zly typ zmiennej" << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
				clubs.erase(clubs.begin() + index);
				cout << "Klub o numerze identyfikacyjnym: " << index << " zostal usuniety " << endl;
			}
			
		}
		else if (var == '4')
		{
			//zapis
			cout << "Tryb zapisu do pliku" << endl;
			fstream file;

			file.open("dane.txt", ios::out);
			if (file.is_open())
			{
				size_t N = clubs.size();
				file << N << " ";
				for (size_t n = 0; n<N; ++n)
				{
					clubs[n]->saveToFile(file);
				}
				cout << "Poprawnie zapisano dane do pliku" << endl;
			}
			else
				cout << "Blad otwarcia pliku";
			file.close();

		}
		else if (var == '5')
		{
			clubs.clear();
			//odczyt z pliku
			fstream file;
			file.open("dane.txt", ios::in);
			if (file.is_open())
			{
				size_t N;
				file >> N; //liczba klubow
				for (size_t n = 0; n<N; ++n)
				{
					int typ;
					file >> typ;
					switch (typ)
					{
					case 0:
					{
						MusicClub *mc = new MusicClub();
						mc->readFromFile(file);
						clubs.push_back(mc);
						break;
					}
					case 1:
					{
						SportClub *s = new SportClub();
						s->readFromFile(file);
						clubs.push_back(s);
						break;
					}
					case 2:
					{
						SquashSportClub *ss = new SquashSportClub();
						ss->readFromFile(file);
						clubs.push_back(ss);
						break;
					}
					}
				}
				file.close();
				cout << "Poprawnie zaladowano dane z pliku" << endl;
			}
			else
			{
				cout << "Blad otwarcia pliku" << endl;
			}

		}

		else if (var == '6')
		{
			cout << "Tryb wypisywania ca³ego obiektu" << endl;
			//wypisywanie - polimorfizm
			size_t N;
			N = clubs.size();
			for (size_t n = 0; n < N; ++n)
			{
				clubs[n]->display();
			}
		}
		else if (var == '7')
		{
			return 0;
		}
		else
			cout << "Wybrano zla wartosc. Wpisz ponownie poprawna wartosc" << endl << endl;
	}
}

