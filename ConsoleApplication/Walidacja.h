#pragma once
#include "Suma_kontrolna.h"
#include "Format_pesel.h"
#include "Obsluga.h"
#include "Data.h"
using namespace std;
class Walidacja
	: Format_pesel, Suma_kontrolna, Obsluga
	
{
	bool poprawnosc;
public:

	bool walidacja()
	{
		if ((Suma_kontrolna::x == 1) and (Format_pesel::flaga == false) and  Obsluga::control == 1)
		{
			poprawnosc = true;

		}
		else
			poprawnosc = false;

		return poprawnosc;
 

	}
	

	Walidacja(Suma_kontrolna obj1, Format_pesel obj2, Obsluga obj3)
	{
		 Suma_kontrolna::x = obj1.x;
		 Format_pesel::flaga = obj2.flaga;
		 Obsluga::control = obj3.control;
		 

	}

};

