#include "Bonus.h"
#include "glut.h"
#include <stdlib.h>

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
	position.x = position.x + velocity.x*t + 0.5f*aceleration.x*t*t;
	position.y = position.y + velocity.y*t + 0.5f*aceleration.y*t*t;
	velocity.x = velocity.x + aceleration.x*t;
	velocity.y = velocity.y + aceleration.y*t;
}

