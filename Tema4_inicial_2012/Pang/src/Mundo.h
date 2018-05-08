#include "Caja.h"
#include "Personaje.h"
#include "Esfera.h"
#include "Bonus.h"
#include "Disparo.h" 

class Mundo
{	
	Disparo disparo;
	Esfera esfera;
	Esfera esfera2;
	Personaje personaje;
	Caja caja;
	Bonus bonus;
	Pared plataforma;

	float x_ojo;
	float y_ojo;
	float z_ojo;
public: 
	void Tecla(unsigned char key);
	void Inicializa();
	void RotarOjo();
	void Mueve();
	void Dibuja();
	void teclaEspecial(unsigned char key);


};
