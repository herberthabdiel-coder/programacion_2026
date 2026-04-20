#include "Conversacion.h"
#include <iostream>

void Conversacion::agregarMensaje(const std::string& emisor, const std::string& contenido) {
    listaMensajes.emplace_back(emisor, contenido);
}

void Conversacion::mostrarConversacion() const {
    std::cout << "\n--- Inicio de la Conversacion ---" << std::endl;
    for (const auto& msg : listaMensajes) {
        msg.mostrarMensaje();
    }
    std::cout << "--- Fin de la Conversacion ---\n" << std::endl;
}