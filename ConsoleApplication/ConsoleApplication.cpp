﻿
#include <iostream>
#include <string>
#include <sstream>
#include "Class.h"
using namespace std;
int main()
{
	
	string plik;
	int number;
	string dane;
	cout << "********** Walidacja i ekstrakcja danych z numery PESEL ********** " << endl;
	cout << "Wprowadz dane za pomocą jednej z opcji(1-2) lub zakoncz dzialanie programu(3)" << endl;
	cout << "1.Wprowadz dane z klawiatury "<< endl;
	cout << "2.Wprowadz dane z pliku" << endl;
	cout << "3.Zakoncz dzialanie programu " << endl;
	cin >> number;	
	while (number != 1 && number != 2 && number != 3)
	{
		cout << "Wybrano nieprawidlowa opcje, sprobuj ponownie(1-3) " << endl;
		cin >> number;
	}
		if (number == 1)
		{
			cout << "Wprowadz numer pesel:  " << endl;
			int number01;
			cin >> dane;
			cout << "*******Sprawdzanie poprawnosc numeru pesel******* " << endl;
			Spr_pesel pesel(dane);
			pesel.sprawdz(dane);
			cout << "1.Odczytaj date urodzenia" << endl;
			cout << "2.Odczytaj plec" << endl;
			cout << "3.Odczytaj dzien,miesiac,rok" << endl;
			cin >> number01;
			if (number01 == 1)
			{

			}
			else if (number01 == 2)
			{
			}
			else if (number01 == 3)
			{
			}

			

			
		}
		else if (number == 2)
		{
			cout << "Podaj nazwe pliku : " << endl;
			cin >> plik;

		}
		else if (number == 3)
		{
			cout << "Dziekujemy za skorzystanie z naszych uslug" << endl;
		}


	
		
	
	
}
