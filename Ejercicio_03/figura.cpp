#include "figura.h"
#include <iostream>

Figura::Figura(string nombre){
    this->nombre = nombre;
}

Figura::~Figura{
    //no  va basio 
}

string Figura::obtenerNombre(){
    return nombre;
}


void Figura::describir(){
    cout <<"es una figura que se llama:" << nombre << endl;
}

