#pragma once
#include <iostream>
#include "Format_pesel.h"
#include "Konwersja.h"
#include <memory>
using namespace std;

class Suma_kontrolna
	:Konwersja
	
{	
	
	public:
	int suma;
	int x;
	int sprawdz_sume()
	{
		unique_ptr<Konwersja> tb;
			tb->tb[0];
			tb->tb[1];
		
		
		      //  3 * ptr->tb[1] +
			  //  7 * ptr->tb[2] +
			//	9 * ptr->tb[3] +
			//	1 * ptr->tb[4] +
			//	3 * ptr->tb[5] +
			//	7 * ptr->tb[6] +
			//	9 * ptr->tb[7] +
			//	1 * ptr->tb[8] +
			//	3 * ptr->tb[9];
		suma %= 10;
		suma = 10 - suma;
		suma %= 10;

		if (suma == tb->tb[10])
		{
			return x = 1;
		}
		else
			return x = 0;

		
		
	}

	Suma_kontrolna() {};

	
	
	
	
	
	
};

