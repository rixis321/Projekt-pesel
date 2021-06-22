#pragma once
#include "Suma_kontrolna.h"


class Data
	:Suma_kontrolna
{
	public:
		int dzien;
		int miesiac;
		int rok;
	
		int setDzien();
		void getDzien();
		int setRok();
		void getRok();
		

	Data(Suma_kontrolna  obj)
	{
		ptr = obj.ptr;
	}
	Data() {};
	
	
	

};

