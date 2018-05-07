#include "Pared.h"
#include "glut.h"


void Pared::Dibuja()
{
	glDisable(GL_LIGHTING);
	glColor3ub(rojo, verde, azul);
	glBegin(GL_POLYGON);
	glVertex3d(limite1.x, limite1.y, 10);
	glVertex3d(limite2.x, limite2.y, 10);
	glVertex3d(limite2.x, limite2.y, -10);
	glVertex3d(limite1.x, limite1.y, -10);
	glEnd();
	glEnable(GL_LIGHTING);
}

	//Calculo de distancia de una pared a un punto, adicionalmente
	//se modifica el valor de un vector direccion opcional que contendr�
	//el vector unitario saliente que indica la direccion de la
	//recta m�s corta entre el punto y la pared.
	float Pared::distancia(Vector2D punto, Vector2D *direccion)
	{
		Vector2D u = (punto - limite1);//vector que va desd el lim1 a punto
		Vector2D v = (limite2 - limite1).Unitario();//vector de la pared
		float longitud = (limite1 - limite2).modulo();//longitud de la pared
		Vector2D dir;
		float valor = u * v;
		float distancia = 0;
		if (valor<0)
			dir = u;
		else if (valor>longitud)
			dir = (punto - limite2);
		else
			dir = u - v * valor;
		distancia = dir.modulo();
		if (direccion != 0) //si nos dan un vector�
			*direccion = dir.Unitario();
		return distancia;
	}


void Pared::setPos(float x1, float y1, float x2, float y2)
{
	limite1.x = x1;
	limite1.y = y1;
	limite2.x = x2;
	limite2.y = y2;
}

void Pared::setColor(unsigned char r, unsigned char a, unsigned char v)
{
	rojo = r;
	azul = a;
	verde = v;
}