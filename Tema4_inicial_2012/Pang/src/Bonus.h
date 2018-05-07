#pragma once
#include "Vector2D.h"


class Bonus
{
	float lado;
	Vector2D position;
	Vector2D velocity;
	Vector2D aceleration;
public:
	Bonus();
	~Bonus();

	void Dibuja();
	void Mueve(float);
	void setPos(float ix, float iy);
};

