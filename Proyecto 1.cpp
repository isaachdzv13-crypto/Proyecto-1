// Proyecto 1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Ejercicio.h"
//#include "Especialidad.h"
#include "Instructor.h"
#include "Cliente.h"
int main()
{
    Ejercicio* ejr1 = new Ejercicio(new string(" Elevaciones"), new string ("Hombro"));
    cout << *(ejr1->toString()) << endl;
    Especialidad* esp1 = new Especialidad(new string("Crossfit"));
    Especialidad* esp2 = new Especialidad(new string("Aerobicos"));
    Especialidad* esp3 = new Especialidad(new string("Danza"));
    cout << *(esp1->toString()) << endl;
    Instructor* inst1 = new Instructor(new string("11111"), new string("Pablo Emilio"), new string("88888"), new string("isaachdzv13"),
        new string(" 12 de diceimbre"), 11);
    Instructor* inst2 = new Instructor(new string("11111"), new string("Pablo Emilio"), new string("88888"), new string("isaachdzv13"),
        new string(" 12 de diceimbre"), 11);
    
    Cliente* cli1 = new Cliente(new string("22222"), new string("Pepe Alboran"), new string("5678"), new string("danielolxduwu"), new string("21 de mayo"),
        new char('H'), new string("Mayo 2022"),inst1);
    cout << *(cli1->toString()) << endl;

    inst1->agregarEspecialidad(esp1);
    inst1->agregarEspecialidad(esp2);
    cout << *(inst1->toString()) << endl;
    cout << *(inst2->toString()) << endl;




    delete ejr1,esp1;
    delete inst1; delete inst2;
    delete cli1;


    system("PAUSE");
    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
