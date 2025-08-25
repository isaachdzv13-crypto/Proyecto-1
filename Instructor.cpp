#include "Instructor.h"

Instructor::Instructor(string* ced, string* nom, string* telef, string* correo, string* fechaN, int tam)
{
	this->nCedula = new string(*ced);
	this->nombreC = new string(*nom);
	this->telef = new string(*telef);
	this->correo = new string(*correo);
	this->fechaNaci = new string(*fechaN);
	this->tam = tam;
	vecEsp = new Especialidad * [tam];
	can = 0;
}

Instructor::~Instructor()
{
	delete nCedula; delete nombreC; delete telef; delete correo; delete fechaNaci;
	for (int i = 0; i < can; i++) {
		delete vecEsp[i];
	}
	delete[] vecEsp;
}

string* Instructor::getCedula()
{
	return this->nCedula;
}
string* Instructor::getNombre() {
	return this->nombreC;

}
string* Instructor::getTelef()
{
	return this->telef;;
}

string* Instructor::getCorreo()
{
	return this->correo;
}

string* Instructor::getFechaNaci()
{
	return this->fechaNaci;
}

Especialidad** Instructor::getVec()
{
	return vecEsp;
}

void Instructor::setCedula(string* c)
{
	this->nCedula = c;

}
void Instructor::setNombre(string* n){
	this->nombreC = n;

}
void Instructor::setTelef(string* t)
{
	this->telef = t;
}

void Instructor::setCorreo(string* co)
{
	this->correo = co;
}

void Instructor::setFechaNaci(string* fn)
{
	this->fechaNaci = fn;
}

string* Instructor::toString(){
	stringstream s;
	s << "--------------- Instructor ---------------" << endl;
	s << "Cedula: " << *(this->nCedula) << endl;
	s << "Nombre: " << *(this->nombreC) << endl;
	s << "Numero de telefono: " << *(this->telef) << endl; 
	s << "Correo Electronico: " << *(this->correo) << endl;
	s << "Fecha de nacimiento: " << *(this->fechaNaci) << endl;
	s << "Desglose de especialidades: " << endl;
	s << endl;
	if (can == 0) {
		s << "No posee especialidad asignada." << endl;
	}
	else {
		for (int i = 0; i < can; i++) {
			s << *(vecEsp[i]->toString()) << endl;
		}
	}
	s << "-----------------------------------------" << endl;
	return new string(s.str());
}
void Instructor::agregarEspecialidad(Especialidad* esp)
{
	if (can > tam) {
		return;
	}
	vecEsp[can++] = esp;
	//vecEsp[can++] = new Especialidad(*esp);

}
