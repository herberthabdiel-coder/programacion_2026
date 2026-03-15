#ifndef CIRCULO.H 
#define CIRCULO.H 

#include <string>

class Circulo : public figura {
    private:
        double radio;

    public:
        Circulo(string nombre,doble radio);
        virtual ~circulo();


        virtual double calcularArea() override;
        virtual void describir() override;


        double obtenerRadio();


};

#endif