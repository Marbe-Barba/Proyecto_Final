#include "Calabozo.hpp"
#include <iostream>

Calabozo::Calabozo() {

}

Calabozo::Calabozo(Catalogo* cat) {
    generarCalabozo(cat);
}

Calabozo::~Calabozo() {
    cuartos.borrarLista();
}

void Calabozo::generarCalabozo(Catalogo* cat) {
    if (!cat) {
        std::cerr << "Error: el catálogo no está inicializado.\n";
        return;
    }

    std::srand(static_cast<unsigned>(std::time(nullptr))); // semilla para aleatorios

    for (int i = 1; i <= 20; ++i) {
        // Pide un monstruo aleatorio al catálogo
        const Monstruo* m = cat->getMonstruoAleatorio();

        // Crea un nuevo cuarto con el monstruo
        Cuarto nuevoCuarto(i, *m);  // si Cuarto usa copia
        // o Cuarto nuevoCuarto(i, m);  // si Cuarto usa puntero

        // Inserta el cuarto al final de la lista doble
        cuartos.insertarFinal(nuevoCuarto);
    }

    std::cout << "✅ Calabozo generado con 20 cuartos.\n";
}

void Calabozo::mostrarCalabozo() const {
    std::cout << "\n=== CALABOZO ===\n";
    cuartos.imprimeLista(); // usa operator<< de Cuarto
}

