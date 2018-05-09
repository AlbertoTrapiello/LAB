#include "Interaccion.h"
#include <iostream>

using namespace std;

void Interaccion::rebote(Personaje & p, Caja c)
{
	float xmax = c.suelo.limite2.x;
	float xmin = c.suelo.limite1.x;
	if (p.position.x>xmax)p.position.x = xmax;
	if (p.position.x<xmin)p.position.x = xmin;
}

bool Interaccion::rebote(Esfera & e, Pared p)
{
	Vector2D dir;
	float dif = p.distancia(e.position, &dir) - e.radio;
	if (dif <= 0.0f)
	{
		Vector2D v_inicial = e.velocity;
		e.velocity = v_inicial - dir * 2.0*(v_inicial*dir);
		e.position = e.position - dir * dif;
		return true;
	}
	return false;
}

void Interaccion::rebote(Esfera & e, Caja c)
{

	if (c.pared_dcha.distancia(e.position) <= e.radio)
	{
		Interaccion::rebote(e, c.pared_dcha);

	}
	if (c.pared_izq.distancia(e.position) <= e.radio)
	{
		Interaccion::rebote(e, c.pared_izq);

	}
	if (c.suelo.distancia(e.position) <= e.radio)
	{
		Interaccion::rebote(e, c.suelo);
	}
	if (c.techo.distancia(e.position) <= e.radio)
	{
		Interaccion::rebote(e, c.techo);
	}
}

void Interaccion::rebote(Esfera & e, Esfera & e2)
{
	if (e.distancia(e2) <= 0)
	{
		e.velocity = e.velocity*-1;
		e2.velocity = e2.velocity*-1;
	}

}


