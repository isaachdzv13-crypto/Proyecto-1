#include "ClaseGrupal.h"
#include <iostream>
#include <sstream>
using namespace std;

//Agregar metodo que verifica la especialidad de la clase con la del instructor
ClaseGrupal::ClaseGrupal(string* nombre,int* cod, int* cap, string* sal, Instructor* inst, string* hor, int tamanio){
	this->codigo = new int(*cod);
	this->capacidad = new int(*cap);
	this->salon = new string(*sal);

	this->nombreClase = new string(*nombre);
	this->instru = inst;
	this->horario = new string(*hor);

	this->tamanio=tamanio;
	vecClien = new Cliente * [tamanio];
	this->can = 0;
}
ClaseGrupal::~ClaseGrupal(){
	delete this->codigo;
	delete this->capacidad;
	delete this->salon;
	delete this->horario;
	delete this->nombreClase;
	delete[]vecClien;
}
int* ClaseGrupal:: getCodigo(){
	return this->codigo;
}
int* ClaseGrupal::getCapacidad(){
	return this->capacidad;
}
string* ClaseGrupal::getSalon(){
	return this->salon;
}
Instructor* ClaseGrupal::getInstructor(){
	return this->instru;
}
string* ClaseGrupal::getHorario(){
	return this->horario;
}
void ClaseGrupal::setCodigo(int* co){
	this->codigo = co;
}
void ClaseGrupal::setCapacidad(int* ca){
	this->capacidad = ca;
}
void ClaseGrupal::setSalon(string* sa){
	this->salon = sa;
}
void ClaseGrupal::setInstructor(Instructor* instt){
	this->instru = instt;
}
void ClaseGrupal::setHorario(string* ho){
	this->horario = ho;
}

string* ClaseGrupal::toString(){
	stringstream ss;
	ss << "-----------Clase Grupal-----------" << endl;	
	ss << "Nombre: " << *(this->nombreClase) << endl;
	ss << "Codigo: " << *(this->codigo) << endl;
	ss << "Capacidad: " << *(this->capacidad) << endl;
	ss << "Salon: " << *(this->salon) << endl;
	ss << "Instructor: " << *(this->instru->getNombre()) << endl;
	ss << "Horario: " << *(this->horario) << endl;
	ss << "----------------------------------" << endl;
	return new string(ss.str());
}

void ClaseGrupal::matricularCliente(Cliente* c)
{
	if (can > tamanio) {
		return;
	}
	vecClien[can++] = c;

}

string* ClaseGrupal::toStringNombresMatriculados()
{
	stringstream ss;
	ss << "Lista de Matriculados..." << endl;
	for (int i = 0; i < can; i++) {
		ss << *(vecClien[i]->getCedula()) << " " << *(vecClien[i]->getNombre()) << endl;
	}
	return new string(ss.str());
}



