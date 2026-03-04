#include <iostream>
#include "autobus.h"
#include "camion.h"

using namespace std;

int main() {
    // Creación de objetos con datos variados
    Autobus busEscolar("BlueBird", "Vision", 2025, "SCH-99", 500, 60, "Escolar");
    Camion deCarga("Freightliner", "Cascadia", 2024, "LOG-88", 15000, 35, 18);

    cout << "--- ESTADO INICIAL DEL INVENTARIO ---" << endl;
    busEscolar.mostrarInformacion();
    cout << "------------------------------------" << endl;
    deCarga.mostrarInformacion();

    // Gestión de placas (REQUERIMIENTO DEL RETO)
    cout << "\n>>> Actualizando placas de circulacion..." << endl;
    busEscolar.actualizarPlacas("NUEVA-ESC-2026");
    deCarga.actualizarPlacas("NUEVA-CARGA-777");

    cout << "\n--- ESTADO FINAL (PLACAS ACTUALIZADAS) ---" << endl;
    busEscolar.mostrarInformacion();
    cout << "------------------------------------" << endl;
    deCarga.mostrarInformacion();

    return 0;
}