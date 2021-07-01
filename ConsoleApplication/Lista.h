#pragma once
#include "Element.h"

class Lista

{
	Element* pierwszy; // element na poczatek listy


public:

	Lista()
	{
		pierwszy = 0;
	}

	void dodaj_pesel(Format_pesel obj);

	void wyswietl_liste();



};

