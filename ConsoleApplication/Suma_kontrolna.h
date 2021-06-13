#pragma once
#include <iostream>
#include "Format_pesel.h"
#include "Konwersja.h"
using namespace std;

class Suma_kontrolna
{	
	
	public:
	int suma;
	int x;
	int sprawdz_sume(int tab[])
	{
		
		suma =  1 * tab[0] +
		        3 * tab[1] +
			    7 * tab[2] +
				9 * tab[3] +
				1 * tab[4] +
				3 * tab[5] +
				7 * tab[6] +
				9 * tab[7] +
				1 * tab[8] +
				3 * tab[9];
		suma %= 10;
		suma = 10 - suma;
		suma %= 10;

		if (suma == tab[10])
		{
			return x = 1;
		}
		else
			return x = 0;

		
	
	}

	Suma_kontrolna();

	
	
	
	
	
	
};

