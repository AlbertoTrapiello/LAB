#pragma once
#include "Vector2D.h"


class Bonus
{
public:
	Bonus();
	~Bonus();

	float lado;

	Vector2D position;
	Vector2D velocity;
	Vector2D aceleration;

	void Dibuja();
	void Mueve(float);
};

