#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
vector<double> wczytaj(const string nazwa_pliku)
{
	ifstream plik(nazwa_pliku);
	char a;
	double number;
	
	vector<double>dane;
	
	char przecinek;
	if (plik)
	{
		while (plik >> number >> przecinek)
		{
			dane.push_back(number);
			
		}
		
		plik.close();
	}


	return dane;
}



