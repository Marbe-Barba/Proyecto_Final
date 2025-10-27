#include "Jugador.hpp"
#include <iostream>

Jugador::Jugador(){
    usuario = " ";
}

Jugador::Jugador (std::string nombre){
    usuario = nombre;
}

Jugador::~Jugador(){
    Vencidos.borrarLista();
}

std::string Jugador::getUsuario(){
    return usuario;
}

void Jugador::setUsuario(std::string nombre) {
    usuario = nombre;
}

void Jugador::agregarVencidos(Monstruo* m) {
    if (m == nullptr) return; // Si es null, no hacemos nada

    // Insertamos al final de la lista ligada
    vencidos.insertarFinal(m);
}

void Jugador::mostrarVencidos() const {
    std::cout << "\nMonstruos vencidos de " << usuario << ":\n";
    vencidos.imprimeLista(); // usa operator<< de Monstruo
}