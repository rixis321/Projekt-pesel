#pragma once
#include <iostream>
#include <string>
#include "Format_pesel.h"
using namespace std;
class Konwersja
	:public Format_pesel
{
	
	public:
	int tb[11];
	int* zamien_na_tablice(string pesel, int t[11])
	{
		for (int i = 0; i < pesel.length(); i++)
		{
			int liczba;
			string litera;
			litera = pesel[i];
			liczba = stoi(litera);
			tb[i] = liczba;
		}
		
		for (int i = 0; i < pesel.length(); i++)
		{
			int liczba;
			string litera;
			litera = pesel[i];
			liczba = stoi(litera);
			t[i] = liczba;
		}
		return t;

	}

	Konwersja(string s)
	{
		pesel = s;
	}
	Konwersja() = default;
	
	
	

};