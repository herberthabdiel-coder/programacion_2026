#include "Mensaje.h"

Mensaje::Mensaje(std::string em, std::string cont) : emisor(em), contenido(cont) {}

void Mensaje::mostrarMensaje() const {
    std::cout << "[" << emisor << "]: " << contenido << std::endl;
}