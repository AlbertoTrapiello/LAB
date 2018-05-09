#pragma once
#include "Vector2D.h"
class Esfera
{
	friend class Interaccion;

	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;
	float radio;
	Vector2D position;
	Vector2D velocity;
	Vector2D aceleration;

public:
	Esfera();
	Esfera(float rad, float x = 0.0f, float y = 0.0f, float vx = 0.0f, float vy = 0.0f);
	~Esfera();

	void Dibuja();
	void Mueve(float);
	void setPos(float ix, float iy);
	void setColor(unsigned char, unsigned char, unsigned char);
	void setRadio(float radio);
	void setVel(float ix, float iy);
	float distancia(Esfera &e);

};

