#pragma once
#include <iostream>
#include <string>
#include "Spr_pesel.h"
using namespace std;
class Konwersja
	:public Spr_pesel
{
	string pesel;

	public:
	int tab[11];
	int* zamien_na_tablice(string pesel)
	{

		for (int i = 0; i < pesel.length(); i++)
		{
			int liczba;
			string litera;
			litera = pesel[i];
			liczba = stoi(litera);
			tab[i] = liczba;
		}
		return tab;

	}
	Konwersja(string s)
	{
		pesel = s;
	}
	Konwersja();

};