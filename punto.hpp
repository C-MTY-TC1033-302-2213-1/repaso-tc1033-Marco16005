#ifndef punto_h
#define punto_h

#include <stdio.h>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

class Punto {
private:
    double x, y;

public:
    // Constructores
    Punto();
    Punto(double _x, double _y);

    // Metodos de acceso
    double getX();
    double getY();

    // Metodos de modificacion
    void setX(double _x);
    void setY(double _y);

    // Otros metodos
    double calculaDistancia(Punto p2);
    string str();
};

#endif // PUNTO_HPP