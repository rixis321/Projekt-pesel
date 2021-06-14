#pragma once
#include "Konwersja.h"

class Data
	:Konwersja
{
	int dzien;
	int miesiac;
	int rok;
	
	
	public:
	int plec;
	int set_plec(Konwersja obj)
	{
		
		if (obj.tb[9] % 2 == 1)
		{
			return plec = 1;
		}
		else
			return plec = 0;

		

	}

	Data() {}
	
	
	
	
	

};

