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
	position.x = position.x + velocity.x*t + 0.5f*aceleration.x*t*t;
	position.y = position.y + velocity.y*t + 0.5f*aceleration.y*t*t;
	velocity.x = velocity.x + aceleration.x*t;
	velocity.y = velocity.y + aceleration.y*t;
}
