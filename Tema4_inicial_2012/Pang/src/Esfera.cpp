#include "Esfera.h"
#include "glut.h"


Esfera::Esfera()
{

	rojo = verde = azul = 255; //blanco
	radio = 1.0f;
	aceleration.y = -9.8f;

}


Esfera::~Esfera()
{
}

void Esfera::Dibuja()
{
	glColor3ub(rojo, verde, azul);
	glTranslatef(position.x, position.y, 0);
	glutSolidSphere(radio, 20, 20);
	glTranslatef(-position.x, -position.y, 0);
}

void Esfera::Mueve(float t)
{
	position = position + velocity * t + aceleration * (0.5f*t*t);
	velocity = velocity + aceleration * t;
}

void Esfera::setPos(float ix, float iy)
{
	position.x = ix;
	position.y = iy;
}

void Esfera::setColor(unsigned char r, unsigned char a , unsigned char v)
{
	rojo = r;
	azul = a;
	verde = v;
}

void Esfera::setRadio(float radio)
{
	this->radio = radio;
}
