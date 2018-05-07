#pragma once
#include "Vector2D.h"
class Esfera
{
	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;
	float radio;
	Vector2D position;
	Vector2D velocity;
	Vector2D aceleration;
public:
	Esfera();
	~Esfera();

	void Dibuja();
	void Mueve(float);
	void setPos(float ix, float iy);
	void setColor(unsigned char, unsigned char, unsigned char);
	void setRadio(float radio);
};

