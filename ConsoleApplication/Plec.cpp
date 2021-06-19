#include "Plec.h"


int Plec::set_plec()
{

	if (*(ptr + 9) % 2 == 1)
	{
		return plec = 1;
	}
	else
		return plec = 0;



}
void Plec::get_plec()
{
	if (plec == kobieta)
	{
		cout << "Plec : Kobieta " << endl;
	}
	else if (plec == mezczyzna)
	{
		cout << "Plec : Mezczyzna " << endl;
		cout << endl;
	}
	else
		cout << "Plec : Nie stwierdzono" << endl;
	cout << endl;

}