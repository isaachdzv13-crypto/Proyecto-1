#pragma once
#include<iostream>
#include<string>
using namespace std;
class Ejercicio
{
private:
	string* nombreE;
	string* tipoArea;
public:
	Ejercicio();
	Ejercicio(string*, string*);
	~Ejercicio();

	string* getNombre();
	string* getTipo();
	void setNombre(string*);
	void setTipo(string*);
	
	string* toString();
};

