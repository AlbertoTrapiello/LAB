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

