#ifndef FIGURA.H 
#define FIGURA.H 

#includw <string> 
using std::string;

class Figura {
    protected:
    string nombre;

    public::
    Figura(string nombre);
    virtual ~Figura();
    
    virtual double calcularArea() = 0;
    virtual void describir() = 0;

    string obtenerNombre();
}

#endif 