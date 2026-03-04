#include "camion.h"
#include <iostream>

using namespace std;

Camion::Camion() : Vehiculo() {
    tonelajePermitido = 0;
    cantidadRuedas = 0;
}

Camion::Camion(string marca, string modelo, int anio, string placas, int kilometraje,
               int tonelaje, int ruedas)
    : Vehiculo(marca, modelo, anio, placas, kilometraje) {
    this->tonelajePermitido = tonelaje;
    this->cantidadRuedas = ruedas;
}

void Camion::mostrarInformacion() {
    Vehiculo::mostrarInformacion();
    cout << "Limite de carga: " << tonelajePermitido << " tons" << endl;
    cout << "Configuracion de ruedas: " << cantidadRuedas << endl;
}