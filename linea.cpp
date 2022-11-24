#include "linea.h"
#include <iostream>
using namespace std;

Linea::Linea(){
    this->d=0.0;
    this->m=0.0;
    //this->p1(p1*);
}

Linea::Linea(float d, float m, Punto *p1, Punto *p2, int NUM_LINEAS) : d(d),
    m(m),
    p1(p1),
    p2(p2),
    NUM_LINEAS(NUM_LINEAS)
{}

float Linea::getD(){
  return  sqrt(pow((this->p2.x - this->p1.x), 2) + pow ((this->p2.y - this->p1.y), 2))
}
Punto* Linea::getP1(){
  return this->p1;
}

Punto* Linea::getP2(){
  return this->p2;
}
