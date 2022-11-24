#ifndef LINEA_H
#define LINEA_H
#include <iostream>
#include "punto.h"
using namespace std;

class Linea: public Punto
{
private:
    float d;
    float m;
    Punto *p1;
    Punto *p2;
    int NUM_LINEAS;
public:
    Linea();
    Linea(Punto *p1, Punto *p2);
    Linea(float d, float m, Punto *p1, Punto *p2, int NUM_LINEAS);
    float getD();
    string toString();
    Punto *getP1();
    Punto *getP2();
};

#endif // LINEA_H
