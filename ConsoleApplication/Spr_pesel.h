#pragma once
#include <string>
#include <string>
#include <iostream>
using namespace std;

class Spr_pesel
{
	
	bool flaga;

public:
	string pesel;
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
	Spr_pesel(string s2)
	{
		pesel = s2;
	}
	Spr_pesel();

};
