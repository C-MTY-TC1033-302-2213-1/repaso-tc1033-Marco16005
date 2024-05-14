//
//  main.cpp
//  ComposicionTriangulo
//
//  Created by Ma. Guadalupe Roque Díaz de León on 18/05/23.
//

#include <iostream>
#include <iomanip> // for std::setprecision()
#include "Punto.hpp"
#include "Triangulo.hpp"

using namespace std;
int main( ){
    Punto p1{-5, -5}, p2{1, 3}, p3{4, -6};
    Punto p4{-2, -3}, p5{5, -4}, p6{-1,3};
    Punto p7{6, 7}, p8{6, 3}, p9{8,3};
    Triangulo tri1{p4,p5,p6}, tri2{p1, p2, p3}, tri3{p7, p8, p9};
    
    cout << "p_tri1 = " << tri1.perimetro() << endl;
    cout << "a_tri1 = " << tri1.area() << endl;
    cout << "p_tri2 = " << tri2.perimetro() << endl;
    cout << "a_tri2 = " << tri2.area() << endl;
    cout << "p_tri3 = " << tri3.perimetro() << endl;
    cout << "a_tri3 = " << tri3.area() << endl;
    cout << "Distancia = " << p1.calculaDistancia(p2)  << endl;
   
    return 0;
}

