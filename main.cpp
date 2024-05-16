//
//  main.cpp
//  ComposicionTriangulo

#include <iostream>
#include <iomanip> // for std::setprecision()
#include "Punto.hpp"
#include "Triangulo.hpp"

using namespace std;

void desplegarArregloTriangulo(Triangulo arrTriangulos[], int iS ){
    for (int indice = 0; indice < iS; indice++){
        cout << indice << " . " << arrTriangulos[indice].str() << endl;
    }
}

void leerArregloTriangulo(Triangulo arrTriangulos[], int iS){
    double x1, y1, x2, y2, x3, y3;
    Punto pto;    
    for (int indice = 0; indice < iS; indice++){
        cout << "Ingrese las 3 coordenadas x, y de los vertices del triangulo" << indice << " : " << endl;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        pto.setX(x1);
        pto.setY(y1);
        arrTriangulos[indice].setVertice1(pto);
        pto.setX(x2);
        pto.setY(y2);
        arrTriangulos[indice].setVertice2(pto);
        pto.setX(x3);
        pto.setY(y3);
        arrTriangulos[indice].setVertice3(pto);
    }
}

void calcularPerimetroAreaTriangulo(Triangulo arrTriangulos[], int iS){
    for (int indice = 0; indice < iS; indice++){
        cout << "Triangulo " << indice << " . " << endl;
        cout << "Perimetro = " << arrTriangulos[indice].perimetro() << endl;
        cout << "Area = " << arrTriangulos[indice].area() << endl;
    }
}

int main( ){
    Punto p1{-5, -5}, p2{1, 3}, p3{4, -6};
    Punto p4{-2, -3}, p5{5, -4}, p6{-1,3};
    Punto p7{6, 7}, p8{6, 3}, p9{8,3};
    Triangulo tri1{p4,p5,p6}, tri2{p1, p2, p3}, tri3{p7, p8, p9};

    string nombre;
    int edad;

    // for (int alumnos = 1; alumnos < 4; alumnos++){
    //     cout << "Ingresa tu nombre: ";
    //     getline(cin, nombre);
    //     cout << "Ingresa tu edad: ";
    //     cin >> edad;
    //     cin.ignore();
    // }
    
    cout << "p_tri1 = " << tri1.perimetro() << endl;
    cout << "a_tri1 = " << tri1.area() << endl;
    
    cout << "p_tri2 = " << tri2.perimetro() << endl;
    cout << "a_tri2 = " << tri2.area() << endl;
    cout << "p_tri3 = " << tri3.perimetro() << endl;
    cout << "a_tri3 = " << tri3.area() << endl;
    cout << "Distancia = " << p1.calculaDistancia(p2)  << endl;
    //cout << p1.calculaDistancia(Punto(0,0)) << endl;
   
    // Triangulo arrT[100];
    // desplegarArregloTriangulo(arrT, 100);
    // leerArregloTriangulo(arrT, 2);
    // desplegarArregloTriangulo(arrT, 5);
    // calcularPerimetroAreaTriangulo(arrT, 5);

    return 0;
}
