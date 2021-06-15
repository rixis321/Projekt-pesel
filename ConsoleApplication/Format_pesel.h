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
	bool sprawdz(string s1)
	{
		pesel = s1;
		
		
		
		if (pesel.length() != 11)
		{
			while (pesel.length() != 11)
			{
				flaga = true;
				break;
			}

		}
		else
			flaga = false;
		{
	
			for (int i = 0; i < pesel.length(); i++)
			{
				char c = pesel[i];
				if (c < 47 or c > 58)
				{
					flaga = true;
				}
			}

		}
		return flaga;

		

	}
	Format_pesel(string s2)
	{
		pesel = s2;
	}
	Format_pesel() {};
	

};
