
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
#include "Obsluga.h"
#include "odczyt_plik.h"
#include "Zapisz.h"
#include "Lista.h"

int main()
{
	
	string plik;
	int number;
	string dane;
	list<string> lista;
	Lista* baza = new Lista;

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
			bool kontrola = true;
			while (kontrola == true)
			{
				cout << "Wprowadz numer pesel:  " << endl;
				cin >> dane;
				cout << "*******Sprawdzanie poprawnosc formatu numeru PESEL******* " << endl;
				cout << "-----------------------------------------------------------" << endl;
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
				tab.zamien_na_tablice();
				Suma_kontrolna suma(tab);
				suma.sprawdz_sume();
				Data data(suma);
				Plec postac(suma);
				postac.set_plec();
				data.setDzien();
				data.setRok();
				Obsluga obsluga(data);
				obsluga.setMiesiac();
				obsluga.kontrola();

				Walidacja validator(suma, pesel, obsluga);


				if (validator.walidacja() == true)
				{
					cout << "Wprowadzony numer pesel:" << pesel << " jest prawidlowy" << endl;
					baza->dodaj_pesel(pesel);
					cout << endl;
					bool zakoncz = false;
					while (zakoncz == false)
					{
						cout << "1.Odczytaj date urodzenia" << endl;
						cout << "2.Odczytaj plec" << endl;
						cout << "3.Odczytaj dzien,miesiac,rok" << endl;
						cout << "4.Wyswietl liste wprowadzonych danych" << endl;
						cout << "5.Wprowadz ponownie dane" << endl;
						cout << "6.Zakoncz dzialanie programu" << endl;
						cout << "-----------------------------" << endl;
						int number01;
						cin >> number01;
						if (number01 == 1)
						{
							obsluga.data_urodzenia();
							cout << endl;
						}
						else if (number01 == 2)
						{


							postac.get_plec();
							cout << endl;
						}
						else if (number01 == 3)
						{

							data.getDzien();
							obsluga.getMiesiac();
							data.getRok();
							cout << endl;
						}
						else if (number01 == 4)
						{
							baza->wyswietl_liste();
							cout << endl;
						}
						else if (number01 == 5)
						{
							zakoncz = true;
						}
						else if (number01 == 6)
						{
							zakoncz = true;
							kontrola = false;
							cout << "Dziekujemy za skorzystanie z programu" << endl;
							break;
							
						}


					}

				}
				else
					cout << "Nieprawidlowy numer pesel:"<< pesel<< " Sprobuj ponownie." << endl;

			}
			
	
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
			int i = 0;
			int k = 0;
			for (string x : lista)
			{
				i++;
				Format_pesel pesel(x);
				pesel.sprawdz(x);
				if (pesel.sprawdz(x) == false)
				{
					k++;
					lista2.push_back(x);
				}
			}
			cout << "Liczba wprowadzonych danych :" << i << endl;
			cout << "Liczba danych po procesie sprawdzenia formatu :" << k << endl;
			cout <<"Lista numerow po usunieciu nieprawidlowych formatow danych: "<< endl;
			cout << "--------------------------------------------------" << endl;
			wypisz(lista2);
			cout << endl;
			cout << endl;
			cout << """*******WALIDACJA NUMEROW PESEL*******" << endl;
			cout << "----------------------------------------" << endl;
			int j = 0;
			list  <string> lista3;
			for (string x : lista2)
			{
				
				Format_pesel pesel(x);
				pesel.sprawdz(x);
				Konwersja tab(pesel);
				tab.zamien_na_tablice();
				Suma_kontrolna suma(tab);
				suma.sprawdz_sume();
				Data data(suma);
				Plec postac(suma);
				postac.set_plec();
				data.setDzien();
				data.setRok();
				Obsluga obsluga(data);
				obsluga.setMiesiac();
				obsluga.kontrola();

				Walidacja validator(suma, pesel, obsluga);
				if (validator.walidacja() == true)
				{
					lista3.push_back(x);
					j++;
				}
				
			}
			cout << "Liczba danych po procesie walidacji : " << j << endl;
			wypisz(lista3);
			cout << endl;
			cout << endl;
			bool zakoncz = false;
		
			while (zakoncz == false)
			{
				cout << "1.Odczytaj dane dla wszystkich numerow pesel." << endl;
				cout << "2.Przeprowadz analize danych i zapisz je w pliku" << endl;
				cout << "3.Zakoncz dzialanie programu" << endl;

				int x;
				cin >> x;
				if (x == 1)
				{
					odczyt(lista3);
				}
				if (x == 2)
				{
					string nazwa_pliku;
					cout << "Podaj nazwe pliku : " << endl;
					cin>>nazwa_pliku;
					zapisz(nazwa_pliku, lista3);
					cout << "Dane zapisane pomyslnie w pliku o nazwie " << nazwa_pliku  << endl;
					cout << endl;
				}
				if (x == 3)
				{
					zakoncz = true;
				}
			
			}
	
			
		}
		else if (number == 3)
		{
			cout << "Dziekujemy za skorzystanie z naszych uslug" << endl;
		}


		return 0;
		
	
	
}

