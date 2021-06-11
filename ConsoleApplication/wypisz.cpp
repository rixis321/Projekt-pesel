#pragma once
#include <iostream>
#include <list>
using namespace std;

void wypisz(list<string> l)
{

	for (string x : l)
	{
		cout << x << ",";
	}
}