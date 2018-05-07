#pragma once
#include "Pared.h"


class Caja
{
	friend class Interaccion;

	Pared suelo;
	Pared techo;
	Pared pared_izq;
	Pared pared_dcha;
public:
	Caja();
	~Caja();

	void Dibuja();


};

