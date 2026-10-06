// Alejandro Sandoval Vega
//ING. TI
//00625910


#pragma once
using namespace std;
#include <iostream>
#include <string>

class Punto {
private:
    double x;
    double y;

public:
    Punto(double x, double y);
    string toString();
};


class Formas {
private:
    string color;
    Punto centro;
    string nombre;

public:
    Formas(string c, Punto p, string n);
    void imprimir();
    string getColor();
    void setColor(string c);
    void mover(double x, double y);
};


class Rectangulo : public Formas {
private:
    double ladoMenor;
    double ladoMayor;

public:
    Rectangulo(string c, Punto p, string n, double menor, double mayor);
    void imprimir();
    double calcularArea();
    double calcularPerimetro();
    void cambiarTamano(double factor);
};


class Elipse : public Formas {
private:
    double radioMayor;
    double radioMenor;

public:
    Elipse(string c, Punto p, string n, double mayor, double menor);
    void imprimir();
    double calcularArea();
};


class Cuadrado : public Rectangulo {
public:
    Cuadrado(string c, Punto p, string n, double lado);
};


class Circulo : public Elipse {
public:
    Circulo(string c, Punto p, string n, double radio);
};
