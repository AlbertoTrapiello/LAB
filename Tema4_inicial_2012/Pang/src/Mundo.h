#include "Caja.h"
#include "Personaje.h"
#include "Esfera.h"
#include "Bonus.h"
#include "Disparo.h" 

class Mundo
{
public: 

	Disparo disparo;
	Esfera esfera;
	Personaje personaje;
	Caja caja;
	Bonus bonus;
	Pared plataforma;

	void Tecla(unsigned char key);
	void Inicializa();
	void RotarOjo();
	void Mueve();
	void Dibuja();

	float x_ojo;
	float y_ojo;
	float z_ojo;
};
