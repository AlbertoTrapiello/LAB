#pragma once
#include "Vector2D.h"

class Pared
{
public:
	Pared();
	~Pared();

	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;

	Vector2D limite1;
	Vector2D limite2;
	
	void Dibuja();
};

