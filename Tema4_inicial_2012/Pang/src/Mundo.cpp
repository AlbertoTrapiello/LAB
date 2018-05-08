#include "Mundo.h"
#include "glut.h"
#include "Interaccion.h"
#include <math.h>


void Mundo::RotarOjo()
{
	float dist=sqrt(x_ojo*x_ojo+z_ojo*z_ojo);
	float ang=atan2(z_ojo,x_ojo);
	ang+=0.05f;
	x_ojo=dist*cos(ang);
	z_ojo=dist*sin(ang);
}
void Mundo::Dibuja()
{
	gluLookAt(x_ojo, y_ojo, z_ojo,  // position del ojo
			0.0, 0, 0.0,      // hacia que punto mira  (0,0,0) 
			0.0, 1.0, 0.0);      // definimos hacia arriba (eje Y)    

	esfera.Dibuja();
	esfera2.Dibuja();
	caja.Dibuja();
	personaje.Dibuja();
	disparo.Dibuja();
	plataforma.Dibuja();
	bonus.Dibuja();
}

void Mundo::Mueve()
{
	personaje.Mueve(0.025f);
	esfera.Mueve(0.025f);
	esfera2.Mueve(0.025f);
	bonus.Mueve(0.025f);
	disparo.Mueve(0.025f);
	Interaccion::rebote(personaje, caja);
	Interaccion::rebote(esfera, caja);
	Interaccion::rebote(esfera, plataforma);
	Interaccion::rebote(esfera2, caja);
	Interaccion::rebote(esfera2, plataforma);
	Interaccion::rebote(esfera, esfera2);
}

void Mundo::Inicializa()
{
	x_ojo = 0; y_ojo = 10;
	z_ojo = 50;
	esfera.setColor(255, 0, 0);
	esfera.setRadio(1.5f);
	esfera.setPos(2, 4);
	esfera.setVel(5, 15);
	esfera2.setRadio(2);
	esfera2.setPos(-2, 4);
	esfera2.setVel(-5, 15);
	bonus.setPos(5.0f, 5.0f);
	disparo.setPos(-5.0f, 0.0f);
	plataforma.setPos(-5.0f, 9.0f, 5.0f, 9.0f);
}

void Mundo::Tecla(unsigned char key)
{

}

void Mundo::teclaEspecial(unsigned char key)
{
	switch (key)
	{
	case GLUT_KEY_LEFT:
		personaje.setVel(-5.0f, 0.0f);
		break;
	case GLUT_KEY_RIGHT:
		personaje.setVel(5.0f, 0.0f);
		break;
	}
}