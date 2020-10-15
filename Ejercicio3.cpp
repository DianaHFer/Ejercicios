// Ejercicio3.cpp 
//@@ Instituto Tecnologico de Tijuana
//@@ Depto de Sistemas y Computación
//@@ Ing.En Sistemas Computacionales

//@@ Autor : Hernández Fernández Diana @DianaHFer
//@@ Repositorio: https://github.com/DianaHFer/Ejercicios.git_____
//@@ Fecha de revisión : Viernes 16 de Octubre del 2020.


//@ Objetivo del programa :
//Convertir pulgadas a yardas,y pies a pulgadas
#include <iostream>
using namespace std;

int main()
{

    double p;
    cout << "Ingresa total de pulgadas " << endl;
    cin >> p;
    double b;
    cout << "Ingresa total de pies " << endl;
    cin >> b;
    double c;
    
    double yardas=p* 0.0277778;
    double pies = b*12;
    cout << "Pulgadas a Yardas: " << yardas << endl;
    cout << "Pies a Pulgadas: " << pies << endl;

}
