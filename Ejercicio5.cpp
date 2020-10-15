// Ejercicio5.cpp 
////• Instituto Tecnológico de Tijuana
//• Depto de Sistemas y Computación
//Ing.En Sistemas Computacionales

//Autor : Hernández Fernández Diana @DianaHFer
//Repositorio: https://github.com/DianaHFer/Ejercicios.git_____
//Fecha de revisión : Viernes 16 de Octubre del 2020.


//• Objetivo del programa :
//Introducir y determinar si ess par o impar

#include <iostream>

using namespace std;
int main()
{
    int numero;
    cout << "Indique un numero: ";
    cin >> numero;
    if (numero % 2 == 0)
        cout << numero << " es par.";
    else
        cout << numero << " es impar.";
    return 0;
}

