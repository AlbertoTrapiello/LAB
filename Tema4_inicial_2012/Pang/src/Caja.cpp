#include "Caja.h"
#include "glut.h"


Caja::Caja()
{
	suelo.setColor(0, 100, 0);
	suelo.setPos(-10.0f, 0, 10.0f, 0);
	techo.setColor(0, 100, 0);
	techo.setPos(-10.0f, 15.0f, 10.0f, 15.0f);

	pared_dcha.setColor(0, 150, 0);
	pared_dcha.setPos(-10.0f, 0, -10.0f, 15.0f);
	pared_izq.setColor(0, 150, 0);
	pared_izq.setPos(10.0f, 0, 10.0f, 15.0f);
}


Caja::~Caja()
{
}

void Caja::Dibuja()
{
	suelo.Dibuja();
	techo.Dibuja();
	pared_izq.Dibuja();
	pared_dcha.Dibuja();
}
