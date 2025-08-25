#include "Cliente.h"
Cliente:: Cliente(string* c, string* n, string* t , string* corr, string* fN, char* s, string* fI, Instructor* inst){
	this->ced = new string(*c);
	this->nomC = new string(*n);
	this->telef = new string(*t);
	this->correo = new string(*corr);
	this->fechaN = new string(*fN);
	this->sexo = new char(*s);
	this->fechaI = new string(*fI);
	this->inst = inst;


}
Cliente::~Cliente() {
	delete this->ced; delete this->correo; delete this->fechaI;
	delete this->fechaN; delete this->nomC; delete this->sexo;
	delete this->telef;


}
// Getters
string* Cliente::getCedula() {return this->ced;}
string* Cliente::getNombre() { return this->nomC; }
string* Cliente::getTelef() { return this->telef; }
string* Cliente::getCorreo() { return this->correo; }
string* Cliente::getFechaN() { return this->fechaN; }
char* Cliente::getSexo() { return this->sexo; }
string* Cliente::getFechaI() { return this->fechaI; }
Instructor* Cliente::getInstructor() { return this->inst; }

// Setters
void Cliente::setCedula(string* c) { this->ced = c; }
void Cliente::setNombre(string* n) { this->nomC = n; }
void Cliente::setTelef(string* t) { this->telef = t; }
void Cliente::setCorreo(string* cor) { this->correo = cor; }
void Cliente::setFechaN(string* fN) { this->fechaN = fN; }
void Cliente::setSexo(char* sex) { this->sexo = sex; }
void Cliente::setFechaI(string* fecI) { this->fechaI = fecI; }
void Cliente::setInstructor(Instructor* instt) { this->inst = instt; }

// Método toString
string* Cliente::toString(){
	stringstream s;
	s << "-----------------INFORMACION CLIENTE-----------------" << endl;
	s << "Ced: " << *(this->ced) << endl;
	s << "Nombre completo: " << *(this->nomC) << endl;
	s << "Telefono: " << *(this->telef) << endl;
	s << "Correo Electronico: " << *(this->correo) << endl;
	s << "Fecha de nacimiento: " << *(this->fechaN) << endl;
	s << "Sexo: (H | M): " << *(this->sexo) << endl;
	s << "Fecha de inscripcion: " << *(this->fechaI) << endl;
	s << "Nombre del instructor asignado: " << *(this->inst->getNombre()) << endl;
	s << "-----------------------------------------------------" << endl;
	return new string(s.str());
}
