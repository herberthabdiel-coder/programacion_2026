#ifndef MENSAJE_H
#define MENSAJE_H

#include <iostream>
#include <string>

class Mensaje {
private:
    std::string emisor;
    std::string contenido;

public:
    Mensaje(std::string em, std::string cont);
    void mostrarMensaje() const;
};

#endif