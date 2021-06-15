
#include <iostream>
#include <string>
#include <sstream>
#include "Format_pesel.h"
#include "wczytaj.h"
#include <list>
#include "wypisz.h"
#include "Konwersja.h"
#include "Suma_kontrolna.h"
#include "Walidacja.h"
#include "Data.h"
#include "Plec.h"
using namespace std;
int main()
{
	
	string plik;
	int number;
	string dane;
	list<string> lista;

	cout << "********** Walidacja i ekstrakcja danych z numery PESEL ********** " << endl;
	cout << "Wprowadz dane za pomoca jednej z opcji(1-2) lub zakoncz dzialanie programu(3)" << endl;
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
			cin >> dane;
			cout << "*******Sprawdzanie poprawnosc formatu numeru PESEL******* " << endl;
			cout <<"-----------------------------------------------------------"<< endl;
			Format_pesel pesel(dane);
			pesel.sprawdz(dane);
			if (pesel.sprawdz(dane) == true)
			{
				while (pesel.sprawdz(dane) == true)
				{
					cout << "Format numeru PESEL jest nieprawidlowy. Sprobuj ponownie :" << endl;
					cin >> dane;
				}
			}
			else if (pesel.sprawdz(dane) == false)
			{
				cout << "Wprowadzony format numeru PESEL jest prawidlowy." << endl;
				cout << endl;
				

			}
			cout << """******* WALIDACJA NUMERU PESEL*******" << endl;
			cout << "----------------------------------------" << endl;
			Konwersja tab(pesel);
			tab.zamien_na_tablice(dane);
			Suma_kontrolna suma;
			suma.sprawdz_sume();
			Walidacja validator(suma,pesel);
			Data data;
			
			if (validator.walidacja(suma,pesel) == true)
			{
				cout << "Wprowadzony numer pesel jest prawidlowy." << endl;
				bool zakoncz = false;
				while (zakoncz == false)
				{
					cout << "1.Odczytaj date urodzenia" << endl;
					cout << "2.Odczytaj plec" << endl;
					cout << "3.Odczytaj dzien,miesiac,rok" << endl;
					cout << "4.Zakoncz dzialanie programu" << endl;
					int number01;
					cin >> number01;
					if (number01 == 1)
					{

					}
					else if (number01 == 2)
					{
						Plec postac;
						postac.set_plec();
						postac.get_plec();
					}
					else if (number01 == 3)
					{
					}
					else if (number01 == 4)
					{
						zakoncz = true;
					}

				}
				
			}
			else
				cout<< "nieprawidlowy numer pesel." << endl;

	
		}
		else if (number == 2)
		{
			cout << "Podaj nazwe pliku : " << endl;
			cin >> plik;
			lista = wczytaj(plik);
			spr_plik(plik);
			cout << "Wprowadzone numery PESEL: " << endl;
			wypisz(lista);
			cout << endl;
			cout << endl;
			cout << "*******Sprawdzanie formatu wprowadzonych danych******* " << endl;
			cout << "-------------------------------------------------------" << endl;
			list<string> lista2;
			list<string>::iterator it = lista2.begin();
			for (string x : lista)
			{
				Format_pesel pesel(x);
				pesel.sprawdz(x);
				if (pesel.sprawdz(x) == false)
				{
					lista2.push_back(x);
				}
			}
			cout <<"Lista numerow po usunieciu nieprawidlowych danych: "<< endl;
			cout << "--------------------------------------------------" << endl;
			wypisz(lista2);
			cout << endl;
			 cout << """******* WALIDACJA NUMEROW PESEL*******" << endl;
			cout << "----------------------------------------" << endl;


		}
		else if (number == 3)
		{
			cout << "Dziekujemy za skorzystanie z naszych uslug" << endl;
		}


		return 0;
		
	
	
}

