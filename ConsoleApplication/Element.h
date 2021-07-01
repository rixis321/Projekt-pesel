#pragma once
#include "Format_pesel.h"
class Element
	
{

public:
	Element* nastepny; // wskaznik na nastepny element
	Format_pesel element;

	Element()
	{
		nastepny = 0;
	}


};

