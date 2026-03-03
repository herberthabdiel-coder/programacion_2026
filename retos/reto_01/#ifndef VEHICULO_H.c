#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>
using std::string;

class Vehiculo {
protected:
    string marca;
    string modelo;
    int anioLanzamiento; // Cambiado: anio -> anioLanzamiento
    string placas;
    int recorridoKM;     // Cambiado: kilometraje -> recorridoKM

public:
    Vehiculo();
    Vehiculo(string marca, string modelo, int anio, string placas, int kilometraje);

    void actualizarPlacas(string nuevasPlacas);
    void registrarRecorrido(int kmAdicionales); // Cambiado: actualizarKilometraje -> registrarRecorrido

    virtual void mostrarInformacion();
};

#endif