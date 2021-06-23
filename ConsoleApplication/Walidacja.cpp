#include "Walidacja.h"
#include "Suma_kontrolna.h"
#include "Format_pesel.h"
using namespace std;


bool Walidacja::walidacja()
{
	if ((Suma_kontrolna::x == 1) and (Format_pesel::flaga == false) and Obsluga::control == 1)
	{
		poprawnosc = true;

	}
	else
		poprawnosc = false;

	return poprawnosc;


}
