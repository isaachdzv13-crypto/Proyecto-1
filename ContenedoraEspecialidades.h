#pragma once
#include "Especialidad.h"
class ContenedoraEspecialidades
{
private:
	Especialidad** cest;
	int tam;
	int can;
public:
	ContenedoraEspecialidades(int tam);
	~ContenedoraEspecialidades();

	bool *insertarEspe(Especialidad*);
	string *toString();

};

