#pragma once
#include "Konwersja.h"

class Data
	:Konwersja
{
	int dzien;
	int miesiac;
	int rok;
	int plec;
	
public:
	void get_plec(Konwersja obj)
	{
		if (obj.t[9] % 2 == 1)
		{
			cout << "Mê¿czyzna" << endl;
		}
		else
			cout << "Kobieta" << endl;

		
	}

	
	
	
	
};

