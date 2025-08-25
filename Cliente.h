#pragma once
#include "Instructor.h"
class Cliente
{
private:
	string* ced;
	string* nomC;
	string* telef;
	string* correo;
	string* fechaN;
	char* sexo;
	string* fechaI;
	Instructor* inst;
public:
	Cliente(string*, string*, string*, string*, string*, char*, string*, Instructor* inst);
	~Cliente();
	// Getters
	string* getCedula();
	string* getNombre();
	string* getTelef();
	string* getCorreo();
	string* getFechaN();
	char* getSexo();
	string* getFechaI();
	Instructor* getInstructor();

	// Setters
	void setCedula(string*);
	void setNombre(string*);
	void setTelef(string*);
	void setCorreo(string*);
	void setFechaN(string*);
	void setSexo(char*);
	void setFechaI(string*);
	void setInstructor(Instructor*);

	// Método toString
	string* toString();



};

