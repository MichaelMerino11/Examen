#include "punto.h"
#include <iostream>
using namespace std;
Punto::Punto()
{
    this->x=1;
    this->y=1;
}

Punto::Punto(int x, int y) : x(x),
    y(y)
{}

int Punto::getX(){
 return this->X;
}

int Punto::getY(){
 return this->Y;
}

string Punto::toString(){
    return "X:"+this->X+"Y:"+this->Y;
}

