#include <iostream>
#define NUM_CUARTOS 20

#include "Catalogo.hpp"
#include "Calabozo.hpp"

int main() {
    Catalogo miCatalogo;
    Calabozo miCalabozo;

    if (!miCatalogo.cargarDesdeCSV("monstruos.csv")) {
        std::cout << "No se pudo crear el catálogo" << std::endl;
        return 0;
    }

    std::cout << "Creando Calabozo ..." << std::endl;

    // Llena automáticamente 20 cuartos con monstruos aleatorios del catálogo
    miCalabozo.generarCalabozo(&miCatalogo);

    // Muestra los cuartos del calabozo
    miCalabozo.mostrarCalabozo();

    return 0;
}
