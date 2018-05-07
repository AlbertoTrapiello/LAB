#include "Personaje.h"
#include "glut.h"



Personaje::Personaje()
{
	altura = 1.8;
	aceleration.x = aceleration.y = 0;
	position.x = position.y = 0;
	velocity.x = velocity.y = 0;
}


Personaje::~Personaje()
{
}

void Personaje::Dibuja()
{
	glPushMatrix();
	glTranslatef(position.x, position.y, 0);
	glColor3f(1.0f, 0.0f, 0.0f);
	glutSolidSphere(altura, 20, 20);
	glPopMatrix();
}

void Personaje::Mueve(float t)
{
	position = position + velocity * t + aceleration * (0.5f*t*t);
	velocity = velocity + aceleration * t;
}

void Personaje::setVel(float vx, float vy)
{
	velocity.x = vx;
	velocity.y = vy;
}

