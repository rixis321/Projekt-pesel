#pragma once
#include "Data.h"

class Obsluga
	:Data
{
public:
	bool control;
	

	int setMiesiac();

	void getMiesiac();

	void data_urodzenia();

	int spr_miesiac();
	
	int spr_dzien();

	int rok_przystepny();

	bool kontrola();

	Obsluga(Data & obj)
	{
		miesiac = obj.miesiac;
		rok = obj.rok;
		dzien = obj.dzien;
	}
	Obsluga() {
	};
};

