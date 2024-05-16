#include "Punto.hpp"
#include <cmath> 
#include <string>
#include <sstream>

using namespace std;

 // Constructores
Punto::Punto(){
    x=0;
    y=0;
}
Punto::Punto(double _x, double _y){
    x=_x;
    y=_y;
}

// Metodos de acceso
double Punto::getX(){
    return x;
}
double Punto::getY(){
    return y;
}

// Metodos de modificacion
void Punto::setX(double _x){
    x=_x;
}
void Punto::setY(double _y){
    y=_y;
}

// Otros metodos
double Punto::calculaDistancia(Punto p2){
    double distancia = sqrt( pow((p2.x-x),2) + pow((p2.y-y),2) );
    return distancia;
}
string Punto::str(){
    return "(" + to_string(x) + ", " + to_string(y) + ")";

}