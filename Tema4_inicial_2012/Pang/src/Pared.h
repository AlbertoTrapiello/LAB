#pragma once
#include "Vector2D.h"


class Pared
{
	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;
	Vector2D limite1;
	Vector2D limite2;
public:

	void setPos(float x1, float y1, float x2, float y2);
	void setColor(unsigned char, unsigned char, unsigned char);
	void Dibuja();
};

