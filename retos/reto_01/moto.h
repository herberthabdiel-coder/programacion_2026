#ifndef MOTO_H
#define MOTO_H
#include "vehiculo.h"

class Moto : public Vehiculo {
protected:
    int potenciaCC; 
public:
    Moto(string marca, string modelo, int anio, string placas, int kilometraje, int potencia);
    void mostrarInformacion() override;
};
#endif