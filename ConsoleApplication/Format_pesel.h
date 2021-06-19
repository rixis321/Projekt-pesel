#pragma once
#include <string>
#include <string>
#include <iostream>
using namespace std;

class Format_pesel
{
public:
	string pesel;
	bool flaga;

	bool sprawdz(string s1);

	Format_pesel(string s2)
	{
		pesel = s2;
	}
	Format_pesel() {};
	

};
