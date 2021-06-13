#pragma once
#include "Suma_kontrolna.h"
#include "Format_pesel.h"
using namespace std;
class Walidacja
	: Suma_kontrolna, Format_pesel
{
	bool poprawnosc;
	int cyfra_kontrolna;
public:
	bool walidacja(Suma_kontrolna obj01, Format_pesel obj02)
	{
		if ((obj01.x == 1) and (obj02.flaga == false))
		{
			poprawnosc = true;

		}
		else
			poprawnosc = false;

			return poprawnosc;
	}

	Walidacja(Suma_kontrolna obj01, Format_pesel obj02)
	{
		cyfra_kontrolna = obj01.x;
		bool poprawnosc = obj02.flaga;
	}

};

