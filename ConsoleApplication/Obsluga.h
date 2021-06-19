#pragma once
#include "Data.h"

class Obsluga
	:Data
{
public:
	bool control;


	int setMiesiac()
	{
		if (rok > 1800 and rok < 1899)
		{
			miesiac -= 80;
		}
		else if (rok > 2000 and rok < 2099)
		{
			miesiac -= 20;
		}
		else if (rok > 2100 and rok < 2199)
		{
			miesiac -= 40;
		}
		else if (rok > 2200 and rok < 2299)
		{
			miesiac -= 60;
		}
		return miesiac;
	}

	void getMiesiac()
	{
		cout << "Miesiac: " << miesiac << endl;
	}

	void data_urodzenia()
	{
		cout << dzien << "." << miesiac << "." << rok << endl;
	}

	Obsluga(Data obj)
	{
		miesiac = obj.miesiac;
		rok = obj.rok;
		dzien = obj.dzien;
	}
	Obsluga() {};
};

