#pragma once
#include "Data.h"
#include "Konwersja.h"
#include "Suma_kontrolna.h"
class Plec
	:Suma_kontrolna
	
	
{
	int plec;
	int kobieta = 0;
	int mezczyzna = 1;

public:

	int set_plec()
	{

		if (*(ptr+9) % 2 == 1)
		{
			return plec = 1;
		}
		else
			return plec = 0;



	}
	void get_plec()
	{
		if (plec == kobieta)
		{
			cout << "Plec : Kobieta " << endl;
		}
		else if (plec == mezczyzna)
		{
			cout << "Plec : Mezczyzna " << endl;
			cout << endl;
		}
		else
			cout << "Plec : Nie stwierdzono" << endl;
			cout << endl;
			
	}

	Plec(Suma_kontrolna obj)
	{	
		ptr = obj.ptr;
	}
		

};

