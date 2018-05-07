#include "Mundo.h"
#include "glut.h"
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
	bonus.Mueve(0.025f);
	disparo.Mueve(0.025f);
}

void Mundo::Inicializa()
{
		x_ojo = 0;
		y_ojo = 7.5;
		z_ojo = 50;

		esfera.setColor(0, 0, 255);
		esfera.setRadio(1.5f);
		esfera.setPos(2, 4);
		bonus.setPos(5.0f, 5.0f);
		disparo.setPos(-5.0f, 0.0f);
		plataforma.setPos(-5.0f, 9.0f, 5.0f, 9.0f);
}

void Mundo::Tecla(unsigned char key)
{

}
