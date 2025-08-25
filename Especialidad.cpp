#include "Especialidad.h"
#include <sstream>
Especialidad:: Especialidad(){
	this->nombre = new string(" ");
}
Especialidad::Especialidad(string* nom){
	this->nombre = nom;
}
Especialidad::~Especialidad(){
	delete nombre;
}
string* Especialidad::getNombre() { return this->nombre; }
void Especialidad::setNombre(string* nom) { this->nombre = nom; }
string* Especialidad::toString(){
	stringstream s;
	s << "Nombre de la Especialidad: " << *(getNombre()) << endl;
	return new string(s.str());

}
