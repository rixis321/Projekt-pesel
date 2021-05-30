
#include "wczytaj.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	string plik{ "plik.txt" };
	vector<double> dane = wczytaj(plik);
	
	for (int i = 0; i < dane.size(); i++)
	{
		string number = to_string(dane[i]);
		cout << number << endl;

		
		
		
	}


}

