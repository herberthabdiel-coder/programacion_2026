#include "autobus.h"
#include <iostream>

using namespace std;

Autobus::Autobus() : Vehiculo() {
    cupoMaximo = 0;
    categoriaRuta = "";
}

Autobus::Autobus(string marca, string modelo, int anio, string placas, int kilometraje,
                 int cupo, string ruta)
    : Vehiculo(marca, modelo, anio, placas, kilometraje) {
    this->cupoMaximo = cupo;
    this->categoriaRuta = ruta;
}

void Autobus::mostrarInformacion() {
    Vehiculo::mostrarInformacion();
    cout << "Capacidad de pasajeros: " << cupoMaximo << endl;
    cout << "Ruta asignada: " << categoriaRuta << endl;
}