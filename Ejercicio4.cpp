// Ejercicio4.cpp 
//@@ Instituto Tecnologico de Tijuana
//@@ Depto de Sistemas y Computación
//@@ Ing.En Sistemas Computacionales

//@@ Autor : Hernández Fernández Diana @DianaHFer
//@@ Repositorio: https://github.com/DianaHFer/Ejercicios.git_____
//@@ Fecha de revisión : Viernes 16 de Octubre del 2020.


//@ Objetivo del programa :
//Una formula para cambiar Kgrs. a libras es P=2.2K,donde P son libras  y K kilogramos.
//Calcular el numero de libras en 212 kilogramos.
#include <iostream>
using namespace std;

int main()
{

    double k;
    cout << "Ingresa total de kilogramos " << endl;
    cin >> k;
    
    double libras = 2.2 * k;
    cout << "Total de libras: " << libras << endl;

}

