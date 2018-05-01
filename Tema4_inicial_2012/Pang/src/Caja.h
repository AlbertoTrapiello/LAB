#pragma once
#include "Pared.h"

class Caja
{
public:
	Caja();
	~Caja();

	Pared suelo;
	Pared techo;
	Pared pared_izq;
	Pared pared_dcha;

	void Dibuja();


};

