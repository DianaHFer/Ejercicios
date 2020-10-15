// Ejercicio1.cpp 
//@@ Instituto Tecnologico de Tijuana
//@@ Depto de Sistemas y Computación
//@@ Ing.En Sistemas Computacionales

//@@ Autor : Hernández Fernández Diana @DianaHFer
//@@ Repositorio: https://github.com/DianaHFer/Ejercicios.git
//@@ Fecha de revisión : Viernes 16 de Octubre del 2020.


//@ Objetivo del programa :
//@ Calcular la altura (h) para t segundos de un cuerpo lanzado hacia arriba a una velocidad inicial r.

#include <iostream>
using namespace std;

int main()
{
    
    double t;
    cout << "Ingresa el total de segundos: " << endl;
    cin >> t;
    double r;
    cout << "Ingresar el total de la velocidad: " << endl;
    cin >> r;

    double h = (r * t) - 16 * pow(t, 2);
    cout << "Altura: " << h << endl;
}

