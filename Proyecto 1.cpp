// Proyecto 1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

//#include <iostream>
//#include "Ejercicio.h"
////#include "Especialidad.h"
#include "Instructor.h"
#include "Cliente.h"
//#include "BateriaEjercicios.h"
#include "Interfaz.h"
#include "ClaseGrupal.h"
int main()
{
    /*Interfaz intew;
    intew.menu();*/
   /* Ejercicio* ejr1 = new Ejercicio(new string(" Elevaciones"), new string ("Hombro"));
    Ejercicio* ejr2 = new Ejercicio(new string(" Press Militar"), new string("Hombro"));
    Ejercicio* ejr3 = new Ejercicio(new string(" Rear Delts"), new string("Hombro"));


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


    BateriaEjercicios* btr1 = new BateriaEjercicios(50);
    btr1->agregarEjercicio(ejr1);
    btr1->agregarEjercicio(ejr2);
    btr1->agregarEjercicio(ejr3);
    cout << *(btr1->toStringBateria()) << endl;

  


    delete ejr1,ejr2,ejr3,esp1;
    delete inst1; delete inst2;
    delete cli1;
    delete btr1;*/

    Instructor* inst1 = new Instructor(new string("11111"), new string("Pablo Emilio"), new string("88888"), new string("isaachdzv13"),
        new string(" 12 de diceimbre"), 11);
    Instructor* inst2 = new Instructor(new string("11111"), new string("Pablo Emilio"), new string("88888"), new string("isaachdzv13"),
        new string(" 12 de diceimbre"), 11);
    Especialidad* esp1 = new Especialidad(new string("Crossfit"));
    inst1->agregarEspecialidad(esp1);
    Cliente* cli1 = new Cliente(new string("22222"), new string("Pepe Alboran"), new string("5678"), new string("danielolxduwu"), new string("21 de mayo"),
        new char('H'), new string("Mayo 2022"), inst1);
    Cliente* cli2 = new Cliente(new string("1111"), new string("Mario Alboran"), new string("5678"), new string("danielolxduwu"), new string("21 de mayo"),
        new char('H'), new string("Mayo 2022"), inst2);
    ClaseGrupal* cgrupal = new ClaseGrupal(new string("Aerobicos"),new int(111), new int(10), new string("Salon 2"), inst1, new string("Jueves de 1pm"), 25);
    cout << *(cgrupal->toString()) << endl;
    cgrupal->matricularCliente(cli1);
    cgrupal->matricularCliente(cli2);
    cout << *(cgrupal->toStringNombresMatriculados()) << endl;

    /*delete inst1;
    delete esp1;
    delete cli1;
    delete cgrupal;*/
    delete cli1;
    delete cli2;
    delete cgrupal;
    delete inst1;
    delete inst2;
    delete esp1; // Instructor no lo borra, así que hay que borrarlo explícitamente


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
