#pragma once
#include "Vector2D.h"
class Esfera
{
public:
	Esfera();
	~Esfera();

	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;
	float radio;

	Vector2D position;
	Vector2D velocity;
	Vector2D aceleration;

	void Dibuja();
	void Mueve(float);

};

