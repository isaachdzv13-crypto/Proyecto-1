#include "BateriaEjercicios.h"
#include "sstream"
BateriaEjercicios::BateriaEjercicios(int tam)
{
	this->tam = tam;
	/*vecEj = new Ejercicio *[tam];*/
	can = 0;
	vecEj = new Ejercicio * [tam]();

}

BateriaEjercicios::~BateriaEjercicios()
{
	
	delete[] vecEj;
}

void BateriaEjercicios::agregarEjercicio(Ejercicio* ej)
{
	if (can < tam) {
		vecEj[can++] = ej;

	}
}

string* BateriaEjercicios::toStringBateria()
{
	stringstream s;

	s << "------------------------------------" << endl;
	for (int i = 0; i < can; i++) {
		s << *(vecEj[i]->toString() )<< endl;
	}
	s << "------------------------------------" << endl;
	return new string(s.str());
}
