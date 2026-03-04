#include "vehiculo.h"
#include <iostream>

using namespace std;

Vehiculo::Vehiculo() {
    marca = "";
    modelo = "";
    anioLanzamiento = 0;
    placas = "";
    recorridoKM = 0;
}

Vehiculo::Vehiculo(string marca, string modelo, int anio, string placas, int kilometraje) {
    this->marca = marca;
    this->modelo = modelo;
    this->anioLanzamiento = anio;
    this->placas = placas;
    this->recorridoKM = kilometraje;
}

void Vehiculo::actualizarPlacas(string nuevasPlacas) {
    placas = nuevasPlacas;
}

void Vehiculo::registrarRecorrido(int nuevoKilometraje) {
    recorridoKM = nuevoKilometraje;
}

void Vehiculo::mostrarInformacion() {
    cout << "Fabricante: " << marca << " | Linea: " << modelo << endl;
    cout << "Ano: " << anioLanzamiento << " | Placas ID: " << placas << endl;
    cout << "Odometro: " << recorridoKM << " KM" << endl;
}