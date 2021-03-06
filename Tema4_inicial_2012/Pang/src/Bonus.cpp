#include "Bonus.h"
#include <stdlib.h>
#include "glut.h"


Bonus::Bonus()
{
	lado = 1;
}

Bonus::~Bonus()
{
}

void Bonus::Dibuja()
{
		glPushMatrix();
		glTranslatef(position.x, position.y, 0);
		glRotatef(30, 1, 1, 1);
		glColor3f(rand() / (float)RAND_MAX, rand() / (float)RAND_MAX,
			rand() / (float)RAND_MAX);//color aleatorio
		glutSolidCube(lado);
		glPopMatrix();
	
}

void Bonus::Mueve(float t)
{
	position = position + velocity * t + aceleration * (0.5f*t*t);
	velocity = velocity + aceleration * t;
}

void Bonus::setPos(float ix, float iy)
{
	position.x = ix;
	position.y = iy;
}

