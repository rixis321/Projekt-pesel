#include "Data.h"


using namespace std;


int Data::setDzien()
{
	dzien = 10 * *(ptr + 4);
	dzien += *(ptr + 5);
	return dzien;
}

void Data::getDzien()
{
	cout << "Dzien " << dzien << endl;
}

int Data::setRok()
{
	rok = 10 * *(ptr);
	rok += *(ptr + 1);
	miesiac = 10 * *(ptr + 2);
	miesiac += *(ptr + 3);
	if (miesiac > 80 and miesiac < 93)
	{
		rok += 1800;
	}
	else if (miesiac > 0 and miesiac < 13)
	{
		rok += 1900;
	}
	else if (miesiac > 20 and miesiac < 33)
	{
		rok += 2000;
	}
	else if (miesiac > 40 and miesiac < 53)
	{
		rok += 2100;
	}
	else if (miesiac > 60 and miesiac < 73)
	{
		rok += 2200;
	}
	return rok, miesiac;
}

void Data::getRok()
{
	cout << "Rok : " << rok << endl;
}




