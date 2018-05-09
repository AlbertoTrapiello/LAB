#include "Esfera.h"
#include "glut.h"
#include <math.h>

Esfera::Esfera()
{

	rojo = verde = azul = 255; //blanco
	radio = 1.0f;
	aceleration.y = -9.8f;
	velocity.x = 5;
	velocity.y = 20;
}

Esfera::Esfera(float rad, float x, float y, float vx, float vy)
{
	radio = rad;
	position.x = x;
	position.y = y;
	velocity.x = vx;
	velocity.y = vy;
	rojo = verde = 255;
	azul = 100; //color distinto
	aceleration.y = -9.8;
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

void Esfera::setVel(float ix, float iy)
{
	velocity.x = ix;
	velocity.y = iy;
}

float Esfera::distancia(Esfera & e)
{
	float distancia;
	float ix = (e.position.x - this->position.x);
	float iy = (e.position.y - this->position.y);
	distancia = sqrt(ix*ix + iy * iy)-e.radio-this->radio;

	return distancia;
}
