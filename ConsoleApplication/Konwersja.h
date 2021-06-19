#pragma once
#include <iostream>
#include <string>
#include "Format_pesel.h"
using namespace std;
class Konwersja
	:public Format_pesel
{
	
	public:
	int tb[11];
	
	int* zamien_na_tablice();

	Konwersja(Format_pesel s)
	{
		pesel = s.pesel;
	}
	Konwersja() {};
	
	
	

};