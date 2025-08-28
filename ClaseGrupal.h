#pragma once
#include <string>
#include <iostream>
#include "Instructor.h"
#include "Cliente.h"
using namespace std;

class ClaseGrupal
{
private:
	int* codigo; 
	int* capacidad; 
	string* salon; 
	string* nombreClase;
	Instructor* instru; 
	string* horario; 
	Cliente** vecClien;
	int tamanio;
	int can; 

public: 
	ClaseGrupal( string* ,int*, int*, string*,Instructor* inst, string*,int );
	~ClaseGrupal();

	//getters
	int* getCodigo();
	int* getCapacidad();
	string* getSalon();
	Instructor* getInstructor();
	string* getHorario();

	//setters

	void setCodigo(int*);
	void setCapacidad(int*);
	void setSalon(string*);
	void setInstructor(Instructor*);
	void setHorario(string*);

	//toString()
	string* toString(); 

	void matricularCliente(Cliente*);
	string* toStringNombresMatriculados();
};

