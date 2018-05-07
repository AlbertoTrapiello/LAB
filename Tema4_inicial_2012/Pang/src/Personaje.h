#pragma once
#include "Vector2D.h"


class Personaje
{
	friend class Interaccion;

	float altura;
	Vector2D position;
	Vector2D velocity;
	Vector2D aceleration;
public:
	Personaje();
	~Personaje();

	void Dibuja();
	void Mueve(float);
	void setVel(float, float);
};

