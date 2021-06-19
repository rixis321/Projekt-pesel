#include "Konwersja.h"


int* Konwersja::zamien_na_tablice()
{
	for (int i = 0; i < pesel.length(); i++)
	{
		int liczba;
		string litera;
		litera = pesel[i];
		liczba = stoi(litera);
		tb[i] = liczba;

	}
	return tb;
}