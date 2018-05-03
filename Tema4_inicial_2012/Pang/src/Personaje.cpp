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
	position.x = position.x + velocity.x*t + 0.5f*aceleration.x*t*t;
	position.y = position.y + velocity.y*t + 0.5f*aceleration.y*t*t;
	velocity.x = velocity.x + aceleration.x*t;
	velocity.y = velocity.y + aceleration.y*t;
}
