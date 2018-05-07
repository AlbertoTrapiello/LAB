#include "Interaccion.h"



void Interaccion::rebote(Personaje & p, Caja c)
{
	float xmax = c.suelo.limite2.x;
	float xmin = c.suelo.limite1.x;
	if (e.position.x>xmax)e.position.x = xmax;
	if (e.position.x<xmin)e.position.x = xmin;
}

bool Interaccion::rebote(Esfera & e, Pared p)
{
	Vector2D dir;
	float dif = e.distancia(e.position, &dir) - e.radio;
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
/*	float xmax = c.suelo.limite2.x;
	float xmin = c.suelo.limite1.x;
	if (e.position.x>xmax)e.position.x = xmax;
	if (e.position.x<xmin)e.position.x = xmin;
	float ymax = c.suelo.limite2.y;
	float ymin = c.suelo.limite1.y;
	if (e.position.y>ymax)e.position.y = ymax;
	if (e.position.y<ymin)e.position.y = ymin;*/
}

Interaccion::Interaccion()
{

}

