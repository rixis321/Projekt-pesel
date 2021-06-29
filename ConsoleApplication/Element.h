#pragma once
#include "Format_pesel.h"
class Element
	: Format_pesel
{

public:
	Element* nastepny; // wskaznik na nastepny element
	string element;

	Element()
	{
		nastepny = 0;
	}


};

