#include "moto.h"
#include <iostream>

using namespace std;

Moto :: Moto() : Vehiculo() {
    int numeroCilindraje;
    int numeroLlantas;
}

Camion::Camion (string marca, string modelo, int anio, string placas, int kilometraje, int potencia, int numeroCilindraje, int numeroLlantas)
: Vehiculo (marca, modelo, anio, placas, kilometraje){
    this->numeroCilindraje = cilindraje;
    this->numeroLlantas = llantas;
}

void Camion::mostrarInformacion() {
    Vehiculo::mostrarInformacion();
    cout << "Numero de Cilindrajes" << numeroCilindraje << endl;
    cout << "Numero de Llantas" << numeroLlantas << endl;
}