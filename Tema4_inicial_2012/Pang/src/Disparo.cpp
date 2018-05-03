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
	position.x = position.x + velocity.x*t + 0.5f*aceleration.x*t*t;
	position.y = position.y + velocity.y*t + 0.5f*aceleration.y*t*t;
	velocity.x = velocity.x + aceleration.x*t;
	velocity.y = velocity.y + aceleration.y*t;
}
