#include "Calabozo.hpp"
#include <iostream>

Calabozo::Calabozo() { }

Calabozo::Calabozo(Catalogo* c) {
    generarCalabozo(c);
}

Calabozo::~Calabozo() {
    cuartos.borrarLista();
}

void Calabozo::generarCalabozo(Catalogo* c) {
    generarCuartos(c);
}

void Calabozo::generarCuartos(Catalogo* c) {
    for (int i = 0; i < 20; i++) {
        Monstruo* m = new Monstruo(c->obtenerMonstruoAleatorio());
        Cuartos cuarto(i + 1, m);
        cuartos.insertarFinal(cuarto);
    }
}

void Calabozo::mostrarCalabozo() const {
    cuartos.imprimeLista();
    std::cout << std::endl;
}
