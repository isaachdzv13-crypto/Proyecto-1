#pragma once
#include "Ejercicio.h"
class BateriaEjercicios
{
private:
	Ejercicio** vecEj;
	int tam;
	int can;
public:
	BateriaEjercicios(int tam);
	~BateriaEjercicios();

	void agregarEjercicio(Ejercicio*);
	string* toStringBateria();


};

