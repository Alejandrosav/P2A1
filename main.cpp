// Alejandro Sandoval Vega
//ING. TI
//00625910


#include <iostream>
#include "Formas.h"
using namespace std;

int main(){

    Punto punto1(2,3);

    Rectangulo rectangulo("Rojo", punto1, "Rectangulo", 4, 6);
    rectangulo.imprimir();

    cout << endl;

    Elipse elipse("Azul", Punto(5,5), "Elipse", 5, 3);
    elipse.imprimir();

    cout << endl;

    Cuadrado cuadrado("Verde", Punto(1,1), "Cuadrado", 4);
    cuadrado.imprimir();

    cout << endl;

    Circulo circulo("Amarillo", Punto(0,0), "Circulo", 5);
    circulo.imprimir();

}
