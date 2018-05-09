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

	caja.Dibuja();
	personaje.Dibuja();
	disparo.Dibuja();
	plataforma.Dibuja();
	bonus.Dibuja();
	esferas.Dibuja();
}

void Mundo::Mueve()
{
	personaje.Mueve(0.025f);
	esferas.Mueve(0.025f);
	bonus.Mueve(0.025f);
	disparo.Mueve(0.025f);
	esferas.rebote(caja);
	esferas.rebote(plataforma);
	esferas.rebote();
}

void Mundo::Inicializa()
{
	x_ojo = 0; y_ojo = 10;
	z_ojo = 50;
	for (int i = 0; i<6; i++)
	{
		Esfera* aux = new Esfera(0.75 + i * 0.25, i, 1 + i, i, i);
		esferas.Agregar(aux);
	}
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