#pragma once
#include "Especialidad.h"
#include <sstream>
class Instructor
{
private:
	string* nCedula;
	string* nombreC;
	string* telef;
	string* correo;
	string* fechaNaci;
	Especialidad** vecEsp;
	int can;
	int tam;
public: 
	Instructor(string*, string*, string*, string*, string*,int tam);
	~Instructor();

	string* getCedula();
	string* getNombre();
	string* getTelef();
	string* getCorreo();
	string* getFechaNaci();
	Especialidad** getVec();
	void setCedula(string*);
	void setNombre(string*);
	void setTelef(string*);
	void setCorreo(string*);
	void setFechaNaci(string*);
	string* toString();
	void agregarEspecialidad(Especialidad*);


};

