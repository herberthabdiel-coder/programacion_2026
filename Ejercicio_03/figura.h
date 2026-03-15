#ifndef CIRCULO.H
#define CIRUCLO.H
#include <string>
#include "figura.h"




class circulo : public figura {
    private:
    double radio;
    

    public:
    circulo(string nombre, double radio);
    virtual circulo();

    virtual double calcularArea() override;
    virtual void describir() override;
    

    double obtenRadio(),

};
#endif
