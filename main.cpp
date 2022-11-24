#include <iostream>
using namespace std;
#include "linea.h"
#include "punto.h"
int main()
{
    int Punto::getX(){
     return this->X;
    }

    int Punto::getY(){
     return this->Y;
    }

    string Punto::toString(){

        return "X:"+this->X+"Y:"+this->Y;
    }

    Punto punto1(4,5);
    Punto punto2(3,8);

    Linea linea(punto1,punto2);

    cout<<"La distancias es "+to_String(linea.getD())+"\n";

    return 0;
}
