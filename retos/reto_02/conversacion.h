#ifndef CONVERSACION_H
#define CONVERSACION_H

#include <vector>
#include <string>
#include "Mensaje.h"

class Conversacion {
private:
    std::vector<Mensaje> listaMensajes;

public:
    void agregarMensaje(const std::string& emisor, const std::string& contenido);
    void mostrarConversacion() const;
};

#endif