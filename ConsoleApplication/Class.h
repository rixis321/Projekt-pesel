#pragma once
#include <string>
#include <string>
#include <iostream>
using namespace std;

class Spr_pesel
{
	string pesel;

public:
	void sprawdz(string s1)
	{
		pesel = s1;
		
		
		if (pesel.length() != 11)
		{
			while (pesel.length() != 11)
			{
				cout << "Wprowadzono nieprawidlowy numer pesel. Sprobuj ponownie :" << endl;
				cin >> pesel;
			}
			
		}
		else
		{
			bool flaga = false;
			for (int i = 0; i < pesel.length(); i++)
			{
				char c = pesel[i];
				if (c< 47 or c > 58)
				{
					flaga = true;

				}			
			}
			if (flaga == false)
			{
				cout << "Pesel jest prawidlowy" << endl;
			}
			else if (flaga == true)
			{
				cout << "Nieprawidlowy pesel" << endl;
			}
				
			
			

		}

	}
	Spr_pesel(string s2)
	{
		pesel = s2;
	}
	Spr_pesel();

};
