#pragma once
#include "Personaje.h"
#include "Caja.h"
#include "Esfera.h"

class Interaccion
{

public:
	static void rebote(Personaje &p, Caja c);
	static bool rebote(Esfera &e, Pared p);
	static void rebote(Esfera &e, Caja c);
	static void rebote(Esfera &e, Esfera &e2);


};

#pragma once
