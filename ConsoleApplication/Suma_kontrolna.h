#pragma once
#include <iostream>
#include "Format_pesel.h"
#include "Konwersja.h"
using namespace std;

class Suma_kontrolna
	:Konwersja
	
{	
	
	public:
	int suma;
	int x;
	int sprawdz_sume(Konwersja obj)
	{
		
		
		suma =  1 * obj.tb[0] +
		        3 * obj.tb[1] +
			    7 * obj.tb[2] +
				9 * obj.tb[3] +
				1 * obj.tb[4] +
				3 * obj.tb[5] +
				7 * obj.tb[6] +
				9 * obj.tb[7] +
				1 * obj.tb[8] +
				3 * obj.tb[9];
		suma %= 10;
		suma = 10 - suma;
		suma %= 10;

		if (suma == obj.tb[10])
		{
			return x = 1;
		}
		else
			return x = 0;

		
		
	}

	Suma_kontrolna() {};

	
	
	
	
	
	
};

