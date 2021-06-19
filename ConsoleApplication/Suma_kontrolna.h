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
	int* ptr;
	int sprawdz_sume();
	

	Suma_kontrolna(Konwersja obj)
	{
		ptr = obj.tb;
	}
	Suma_kontrolna() {};

	
	
	
	
	
	
};

