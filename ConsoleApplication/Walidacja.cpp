#include "Walidacja.h"
#include "Suma_kontrolna.h"
#include "Format_pesel.h"
using namespace std;



bool Walidacja::walidacja()
{
	if ((cyfra_kontrolna == 1) and (flaga == false))
	{
		poprawnosc = true;

	}
	else
		poprawnosc = false;

	return poprawnosc;


}