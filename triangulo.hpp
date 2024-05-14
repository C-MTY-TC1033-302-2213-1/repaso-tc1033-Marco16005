#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "punto.hpp"
#include <stdio.h>

using namespace std;

class Triangulo {
private:
    Punto v1, v2, v3;

public:
    // Constructores
    Triangulo();
    Triangulo(Punto _v1, Punto _v2, Punto _v3);

    // Metodos de acceso
    Punto getVertice1();
    Punto getVertice2();
    Punto getVertice3();

    // Metodos de modificacion
    void setVertice1(Punto _v1);
    void setVertice2(Punto _v2);
    void setVertice3(Punto _v3);

    // Metodos de utilidad
    double perimetro();
    double area();
    string str();
};

#endif // TRIANGULO_HPP