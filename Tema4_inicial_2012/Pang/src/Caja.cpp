#include "Caja.h"
#include "glut.h"


Caja::Caja()
{
	pared_dcha.limite2.y = pared_izq.limite2.y = 15;
	pared_dcha.limite2.x  = pared_dcha.limite1.x = 10;
	pared_izq.limite2.x = pared_izq.limite1.x = -10;
	pared_dcha.limite1.y = pared_izq.limite1.y = 0;
	suelo.limite2.x = techo.limite2.x = -10;
	suelo.limite1.x = techo.limite1.x = 10;
	suelo.limite1.y = suelo.limite2.y = 0;
	techo.limite1.y = techo.limite2.y = 15;
	pared_dcha.rojo = pared_dcha.azul = pared_izq.rojo = pared_izq.azul = techo.azul = suelo.rojo = 0;
	pared_dcha.verde = pared_izq.verde = suelo.verde = techo.verde = 255;
	suelo.azul = techo.rojo = 100;

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
