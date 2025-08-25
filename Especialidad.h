//#pragma once
#include<iostream>
#include<string>
using namespace std;
class Especialidad
{
private:
	string* nombre; //CrossFit, HIIT,TRX, Pesas, spinning, Cardio, Yoga, Zumba
public:
	Especialidad();
	Especialidad(string*);
	~Especialidad();
	string* getNombre();
	void setNombre(string*);
	string* toString();

};

