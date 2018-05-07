#pragma once
#include "Vector2D.h"
class Disparo
{
	float radio;

	Vector2D origen;
	Vector2D position;
	Vector2D velocity;
	Vector2D aceleration;

public:
	Disparo();
	~Disparo();

	void Dibuja();
	void Mueve(float);
	void setPos(float ix, float iy);
};

