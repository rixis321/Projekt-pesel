#pragma once
#include "Data.h"
#include "Konwersja.h"
class Plec
	:Data
	
{
	int l_plci;
	int kobieta = 0;
	int mezczyzna = 1;

public:
	void get_plec()
	{
		if (l_plci == kobieta)
		{
			cout << "Plec : Kobieta " << endl;
		}
		else if (l_plci == mezczyzna)
		{
			cout << "Plec : Mezczyzna " << endl;
			cout << endl;
		}
		else
			cout << "Plec : Nie stwierdzono" << endl;
			cout << endl;
			
	}

	Plec(Data obj)
	{
		l_plci = obj.plec;
	}
};

