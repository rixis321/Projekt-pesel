#include <iostream>
#include <string>
#include <sstream>
#include "Format_pesel.h"
#include <list>
#include "Konwersja.h"
#include "Suma_kontrolna.h"
#include "Walidacja.h"
#include "Data.h"
#include "Plec.h"
#include "Obsluga.h"
#include <fstream>
using namespace std;


void zapisz(string nazwa_p, list<string> lista)
{
	
	ofstream zapis(nazwa_p);
	
	for (string y : lista)
	{
		Format_pesel pesel(y);
		pesel.sprawdz(y);
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
		int miesiac = obsluga.setMiesiac();

		zapis << "Numer pesel: " << y << endl;
		zapis << "Data urodzenia:" << data.dzien << "." << miesiac << "." << data.rok << endl;
		if (postac.plec == 1)
		{
			zapis << "Plec: Mezczyzna" << endl;
		}
		else
			zapis << "Plec: Kobieta" << endl;
		zapis << "Dzien: "<< data.dzien << endl;
		zapis << "Miesiac: " << miesiac<< endl;
		zapis << "Rok: " << data.rok << endl;
		zapis << "---------------------------------------" << endl;
	}
	zapis.close();
	
}