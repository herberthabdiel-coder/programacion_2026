#ifndef CAMION_H
#define CAMION_H

#include "vehiculo.h"

class Camion : public Vehiculo {
protected:
    int tonelajePermitido; // Cambiado: capacidadCarga -> tonelajePermitido
    int cantidadRuedas;     // Cambiado: numeroEjes -> cantidadRuedas

public:
    Camion();
    Camion(string marca, string modelo, int anio, string placas, int kilometraje,
           int tonelaje, int ruedas);

    void mostrarInformacion() override;
};

#endif