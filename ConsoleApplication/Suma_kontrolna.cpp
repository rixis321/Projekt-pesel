#include "Suma_kontrolna.h"

int Suma_kontrolna::sprawdz_sume()
{

	suma = 1 * *ptr +
		3 * *(ptr + 1) +
		7 * *(ptr + 2) +
		9 * *(ptr + 3) +
		1 * *(ptr + 4) +
		3 * *(ptr + 5) +
		7 * *(ptr + 6) +
		9 * *(ptr + 7) +
		1 * *(ptr + 8) +
		3 * *(ptr + 9);
	suma %= 10;
	suma = 10 - suma;
	suma %= 10;

	if (suma == *(ptr + 10))
	{
		return x = 1;
	}
	else
		return x = 0;

	return 1;

}