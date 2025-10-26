#pragma once
#include <iostream>
#include "ListaLigada.hpp"


class Jugador {
public: 
    jugador();
    ~jugador();

    std::string getUsuario();
    std::strring setUsuario();

    void agregarVencidos(Monstruo);
    void mostrarVencidos();


private:
    std::string usuario;
    ListaLigada <T> Vencidos;
}