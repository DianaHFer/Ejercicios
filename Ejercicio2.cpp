// Ejercicio2.cpp 
//@@ Instituto Tecnologico de Tijuana
//@@ Depto de Sistemas y Computación
//@@ Ing.En Sistemas Computacionales

//@@ Autor : Hernández Fernández Diana @DianaHFer
//@@ Repositorio: https://github.com/DianaHFer/Ejercicios.git_____
//@@ Fecha de revisión : Viernes 16 de Octubre del 2020.


//@ Objetivo del programa :
//@ Una pulgada equivale a 2.5cm ,calcular el número de cm en 32 pulgadas

#include <iostream>
using namespace std;

int main()
{

    double p;
    cout << "Ingresa el total de pulgadas " << endl;
    cin >> p;
   
    double c = p*2.5;
    cout << "Total de cm: " << c << endl;
}

