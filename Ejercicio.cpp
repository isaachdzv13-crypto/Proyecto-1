#include "Ejercicio.h"
#include <sstream>
Ejercicio::Ejercicio()
{
	this->nombreE = new string(" ");
	this->tipoArea = new string(" ");
}

Ejercicio::Ejercicio(string* _nombreE, string* _tipoArea)
{
	this->setNombre(_nombreE);
	this->setTipo(_tipoArea);

}

Ejercicio::~Ejercicio()
{
	delete this->nombreE;
	delete this->tipoArea;
}

string* Ejercicio::getNombre()
{
	return this->nombreE;
}

string* Ejercicio::getTipo()
{
	return this->tipoArea;
}

void Ejercicio::setNombre(string* nombre)
{ 
	this->nombreE = nombre;
}

void Ejercicio::setTipo(string* tipo)
{
	this->tipoArea = tipo;
}

string* Ejercicio::toString()
{
	stringstream s;
	
	s << "Nombre del ejercicio: " << *(getNombre());s << "  Area de Enfoque: " << *(getTipo()) << endl;
	
	return new string(s.str());
}
