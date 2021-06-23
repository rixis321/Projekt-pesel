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


void odczyt(list<string> lista)
{
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
		obsluga.setMiesiac();
		
		cout << "Numer pesel: " << y << endl;
		cout << "Data urodzenia:" << " ";  obsluga.data_urodzenia();
		postac.get_plec();
		data.getDzien();
		obsluga.getMiesiac();
		data.getRok();
		cout << "---------------------------------------" << endl;
	}
}
