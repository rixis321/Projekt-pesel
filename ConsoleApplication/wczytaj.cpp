#include <iostream>
#include <list>
#include <fstream>
using namespace std;

list<string> wczytaj(string nazwa_pliku)
{
	list<string> lista;
	ifstream plik(nazwa_pliku);
	string pesel;
	if (plik)
	{
		while (plik >> pesel)
		{
			lista.push_back(pesel);
		}


		plik.close();
	}

	return lista;
}

void spr_plik(string nazwa_pliku)
{
	ifstream plik(nazwa_pliku);
	if (plik)
	{

		plik.close();
	}
	else
		cout << "Podany plik nie istnieje.";

}