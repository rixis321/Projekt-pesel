#include "Obsluga.h"

int Obsluga::setMiesiac()
{
	if (rok > 1800 and rok < 1899)
	{
		miesiac -= 80;
	}
	else if (rok > 2000 and rok < 2099)
	{
		miesiac -= 20;
	}
	else if (rok > 2100 and rok < 2199)
	{
		miesiac -= 40;
	}
	else if (rok > 2200 and rok < 2299)
	{
		miesiac -= 60;
	}
	return miesiac;
}

void Obsluga::getMiesiac()
{
	cout << "Miesiac: " << miesiac << endl;
}

void Obsluga::data_urodzenia()
{
	cout << dzien << "." << miesiac << "." << rok << endl;
}

