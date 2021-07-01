#include "Lista.h"

void  Lista::dodaj_pesel(Format_pesel obj)
{
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

void Lista::wyswietl_liste()
{
	Element* temp = pierwszy;
	while (temp)
	{
		cout << temp->element.pesel << ",";
		temp = temp->nastepny;
	}

}