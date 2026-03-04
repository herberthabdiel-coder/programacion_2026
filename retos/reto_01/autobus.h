#ifndef AUTOBUS_H
#define AUTOBUS_H

#include "vehiculo.h"

class Autobus : public Vehiculo {
protected:
    int cupoMaximo;     
    string categoriaRuta; // Cambiado: tipoServicio -> categoriaRuta

public:
    Autobus();
    Autobus(string marca, string modelo, int anio, string placas, int kilometraje,
            int cupo, string ruta);

    void mostrarInformacion();
};

#endif