#include "Disparo.h"
#include "glut.h"

Disparo::Disparo()
{
	velocity.x = 0;
	velocity.y = 1;
	radio = 0.25;
	position.x = position.y = 0;
	aceleration.x = aceleration.y = 0;


}


Disparo::~Disparo()
{
}


void Disparo::Dibuja()
{

	glColor3f(0.0f, 1.0f, 1.0f);
	glPushMatrix();
	glTranslatef(position.x, position.y, 0);
	glutSolidSphere(radio, 20, 20);
	glPopMatrix();
}

void Disparo::Mueve(float t)
{
	position = position + velocity * t + aceleration * (0.5f*t*t);
	velocity = velocity + aceleration * t;
}

void Disparo::setPos(float ix, float iy)
{
	position.x = ix;
	position.y = iy;
	origen.x = ix;
	origen.y = iy;
}
