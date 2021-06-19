#pragma once
#include "Data.h"

class Obsluga
	:Data
{
public:
	

	int setMiesiac();

	void getMiesiac();

	void data_urodzenia();
	

	Obsluga(Data obj)
	{
		miesiac = obj.miesiac;
		rok = obj.rok;
		dzien = obj.dzien;
	}
	Obsluga() {};
};

