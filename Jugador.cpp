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

void Jugador::agregarVencidos (Monstruo* m){
    if(!m){
        return;
    }

    auto cmpNombre = [](const Monstruo* a, const Monstruo* b) {
        return a->getName() < b->getName();
    };

    //método de la lista ligada
    Vencidos.insertarOeden(m, cmpNombre);

    void Jugador::mostrarVencidos() const {
    std::cout << "\nMonstruos vencidos de "
              << (usuario.empty() ? "<sin nombre>" : usuario)
              << ":\n";

    // Nota: imprime direcciones si T = puntero, ya que tu ListaLigada
    // usa cout << dato. Para imprimir con tu operator<< de Monstruo,
    // necesitas agregar un método forEach() a la lista.
    vencidos.imprimeLista();
}