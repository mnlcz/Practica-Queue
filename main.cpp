#include <iostream>
#include "Queue.h"

using std::cout, std::endl;

void Pruebas1();

int main()
{
    Pruebas1();
    return 0;
}

void Pruebas1()
{
    cout << "Nueva Fila: " << endl;
    auto nuevaFila = Queue_List(1);
    nuevaFila.MostrarPrimero();
    nuevaFila.MostrarUltimo();
    cout << endl;
    cout << "Se suma un item a la fila..." << endl;
    nuevaFila.Encolar(2);
    nuevaFila.MostrarPrimero();
    nuevaFila.MostrarUltimo();
    cout << endl;
    cout << "Se suma otro item a la fila..." << endl;
    nuevaFila.Encolar(3);
    nuevaFila.MostrarPrimero();
    nuevaFila.MostrarUltimo();
    cout << endl;
    cout << "El primer item se va..." << endl;
    nuevaFila.Desencolar();
    nuevaFila.MostrarPrimero();
    nuevaFila.MostrarUltimo();
}