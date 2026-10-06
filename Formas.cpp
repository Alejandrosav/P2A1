// Alejandro Sandoval Vega
//ING. TI
//00625910


#include "Formas.h"
#include <iostream>
#include <cmath>

using namespace std;

Punto::Punto(double x, double y) {
    this->x = x;
    this->y = y;
}

string Punto::toString() {
    return "(" + to_string(this->x) + ", " + to_string(this->y) + ")";
}

Formas::Formas(string c, Punto p, string n) : centro(p) {
    this->color = c;
    this->nombre = n;
}

void Formas::imprimir() {
    cout << "Nombre: " << this->nombre << endl;
    cout << "Color: " << this->color << endl;
    cout << "Centro: " << this->centro.toString() << endl;
}

string Formas::getColor() {
    return this->color;
}

void Formas::setColor(string c) {
    this->color = c;
}

void Formas::mover(double x, double y) {
    this->centro = Punto(x, y);
}

Rectangulo::Rectangulo(string c, Punto p, string n, double menor, double mayor) : Formas(c, p, n) {
    this->ladoMenor = menor;
    this->ladoMayor = mayor;
}

void Rectangulo::imprimir() {
    Formas::imprimir();
    cout << "Lado menor: " << this->ladoMenor << endl;
    cout << "Lado mayor: " << this->ladoMayor << endl;
}

double Rectangulo::calcularArea() {
    return this->ladoMenor * this->ladoMayor;
}

double Rectangulo::calcularPerimetro() {
    return 2 * this->ladoMenor + 2 * this->ladoMayor;
}

void Rectangulo::cambiarTamano(double factor) {
    this->ladoMenor = this->ladoMenor * factor;
    this->ladoMayor = this->ladoMayor * factor;
}

Elipse::Elipse(string c, Punto p, string n, double mayor, double menor) : Formas(c, p, n) {
    this->radioMayor = mayor;
    this->radioMenor = menor;
}

void Elipse::imprimir() {
    Formas::imprimir();
    cout << "Radio mayor: " << this->radioMayor << endl;
    cout << "Radio menor: " << this->radioMenor << endl;
}

double Elipse::calcularArea() {
    return 3.1416 * this->radioMayor * this->radioMenor;
}

Cuadrado::Cuadrado(string c, Punto p, string n, double lado) : Rectangulo(c, p, n, lado, lado) {
}

Circulo::Circulo(string c, Punto p, string n, double radio) : Elipse(c, p, n, radio, radio) {
}
