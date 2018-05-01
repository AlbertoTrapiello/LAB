#pragma once
#include "Vector2D.h"
class Disparo
{
public:
	Disparo();
	~Disparo();

	float radio;
	
	Vector2D position;
	Vector2D velocity;
	Vector2D aceleration;

	void Dibuja();
	void Mueve(float);
};

