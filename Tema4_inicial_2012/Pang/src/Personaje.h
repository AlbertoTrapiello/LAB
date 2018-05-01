#pragma once
#include "Vector2D.h"
class Personaje
{
public:
	Personaje();
	~Personaje();

	float altura;
	Vector2D position;
	Vector2D velocity;
	Vector2D aceleration;
	void Dibuja();
	void Mueve(float);
};

