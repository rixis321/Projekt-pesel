#include "Format_pesel.h"
#pragma once

bool Format_pesel::sprawdz(string s1)
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
	{
		flaga = false;

		for (int i = 0; i < pesel.length(); i++)
		{
			char c = pesel[i];
			if (c < 47 or c > 58)
			{
				flaga = true;
				break;
			}
		}
	}
	return flaga;

	

}