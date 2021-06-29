#pragma once
#include "Element.h"

class Lista

{
	Element* pierwszy; // element na poczatek listy


public:
	int suma;

	Lista()
	{
		pierwszy = 0;
		suma = 0;
	}

	void  dodaj_pesel(Format_pesel obj)
	{
		suma++;
		Element* nowy = new Element;

		nowy->element = obj.pesel;

		if (pierwszy == 0)
		{
			pierwszy = nowy;
		}
		else
		{
			Element* temp = pierwszy;
			while (temp->nastepny)
			{
				temp = temp->nastepny;
			}
			temp->nastepny = nowy;
			nowy->nastepny = 0;

		}
	}

	void wyswietl_liste()
	{
		Element* temp = pierwszy;
		while (temp)
		{
			cout << "Pesel: " << temp->element << endl;
			temp = temp->nastepny;
		}
	}

};

