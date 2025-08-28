#include "Interfaz.h"

void Interfaz::menu()
{
	int opc;
	do {
		system("cls");
		cout << "---------------------------------------------" << endl;
		cout << "-------Menu PowerLab-------" << endl;
		cout << "(1) Sub Menu de Sucursales." << endl;
		cout << "(2) Sub Menu de Clientes." << endl;
		cout << "(3) Sub Menu de Instructores." << endl;
		cout << "(4) Sub Menu de Clases Grupales." << endl;
		cout << endl;
		cout << "Digite su opcion:" << endl;
		cin >> opc;
		cout << endl;
		switch (opc) {
		case 1: this->subMenuSucursales(); break;
		case 2: this->subMenuClientes(); break;
		case 3: this->subMenuInstructores(); break;
		case 4: this->subMenuClasesGrupales(); break;
		}

	} while (opc != 0);

}

void Interfaz::subMenuSucursales()
{
	cout << "HOLA" << endl;
}

void Interfaz::subMenuClientes()
{
	cout << "6666" << endl;
}

void Interfaz::subMenuInstructores()
{
 Ejercicio* ejr1 = new Ejercicio(new string(" Elevaciones"), new string ("Hombro"));
	Ejercicio* ejr2 = new Ejercicio(new string(" Press Militar"), new string("Hombro"));
	Ejercicio* ejr3 = new Ejercicio(new string(" Rear Delts"), new string("Hombro"));
	BateriaEjercicios* btr1 = new BateriaEjercicios(50);
	btr1->agregarEjercicio(ejr1);
	btr1->agregarEjercicio(ejr2);
	btr1->agregarEjercicio(ejr3);
	int op;
	char p;
	do {
		system("cls");
		cout << "(1) Incluir Instructor" << endl;
		cout << "(2) Lista de Instructores por Sucursal" << endl;
		cout << "(3) Detalle de Instructores" << endl;
		cout << "(4) Instructores por Especialidad" << endl;
		cout << "(5) Clientes por Instructor" << endl;
		cout << "(6) Generar Medición a Cliente" << endl;
		cout << "(7) Historial de Mediciones" << endl;
		cout << "(8) Ingresar Ejercicio a la Batería" << endl;
		cout << "(9) Generar rutina" << endl;
		cout << "(10) Visualización de Rutina" << endl;
		cout << "(0) Regresar al Menú Principal" << endl;
		cout << endl;
		cout << "Ingrese su opcion: " << endl;
		cin >> op;
		
		switch (op) {
		case 1: break;
		case 2: break;
		case 3: break;
		case 4: break;
		case 5: break;
		case 6: break;
		case 7: break;
		case 8: 
			system("cls"); 
			cout << "Informacion de la bateria de ejercicios de PECHO..." << endl;
			cout << *(btr1->toStringBateria()) << endl;
			char p;
			cout << "Desea ingresar un ejercicio? (s/n): ";
			cin >> p;

			while (p != 'n' && p != 'N') {
				
				// Pedir los datos del ejercicio
				cout << "Ingrese el nombre del ejercicio: ";
				string nombre;
				cin >> nombre;

				cout << "Ingrese el tipo del ejercicio: ";
				string tipo;
				cin >> tipo;

				// Crear el ejercicio y agregarlo a la batería
				Ejercicio* ej = new Ejercicio(new string(nombre), new string(tipo));
				btr1->agregarEjercicio(ej);
				cout << endl;
				// Preguntar si desea seguir agregando
				cout << "Desea ingresar otro ejercicio? (s/n): ";
				cin >> p;
			}


			
		}
		
	} while (op != 0);
}

void Interfaz::subMenuClasesGrupales()
{
	cout << "888888" << endl;
}
