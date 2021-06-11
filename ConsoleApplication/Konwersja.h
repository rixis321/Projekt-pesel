#pragma once
#include <iostream>
#include <string>
using namespace std;
class Konwersja
{
	string slowo;
	

public:
	long long liczba;
	long long zamiana(string s)
	{
		slowo = s;
		long long i = stoll(slowo, nullptr, 10);
		liczba = i;
		return liczba;
	}
	Konwersja(string nazwa)
	{
		slowo = nazwa;
	}
};

