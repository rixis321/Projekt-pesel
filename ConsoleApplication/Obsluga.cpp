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

int Obsluga::spr_miesiac()
{
	if (miesiac > 0 and miesiac < 13)
	{
		return 1;
	}
	else
		return 0;
}

int Obsluga::spr_dzien()
{
	if ((dzien > 0 and dzien < 32) and (miesiac == 1 or miesiac == 3 or miesiac == 5 or miesiac == 7 or miesiac == 8 or miesiac == 10 or miesiac == 12))
	{
		return 1;
	}
	else if ((dzien > 0 and dzien < 31) and (miesiac == 4 or miesiac == 6 or miesiac == 9 or miesiac == 11))
	{
		return 1;
	}
	else if ((dzien > 0 and dzien < 30 and rok_przystepny() == 1) or (dzien > 0 and dzien < 29 and rok_przystepny() == 1))
	{
		return 1;
	}
	else
		return 0;
}

int Obsluga::rok_przystepny()
{
	if (rok % 4 == 0 and rok % 100 != 0 or rok % 400 == 0)
	{
		return 1;
	}
	else
		return 0;
}

bool Obsluga::kontrola()
{
	if (spr_miesiac() == 1 and spr_dzien() == 1)
	{
		control = true;
	}
	else
		control = false;

	return control;
}

