#pragma once
#include "Data.h"
#include "Konwersja.h"
#include "Suma_kontrolna.h"
class Plec
	:Suma_kontrolna
	
	
{
	
	

public:
	int plec;
	int kobieta = 0;
	int mezczyzna = 1;

	int set_plec();
	
	void get_plec();
	

	Plec(Suma_kontrolna obj)
	{	
		ptr = obj.ptr;
	}
		

};

