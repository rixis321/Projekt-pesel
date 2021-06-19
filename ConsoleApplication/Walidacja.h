#pragma once
#include "Suma_kontrolna.h"
#include "Format_pesel.h"
using namespace std;
class Walidacja
	:Format_pesel
{
	bool poprawnosc;
	int cyfra_kontrolna;
public:

	bool walidacja();


	Walidacja(Suma_kontrolna obj1, Format_pesel obj2)
	{
		cyfra_kontrolna = obj1.x;
		flaga = obj2.flaga;
	}

};

