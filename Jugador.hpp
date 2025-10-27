#pragma once
#include <iostream>
#include "ListaLigada.hpp"


class Jugador {
public: 
    Jugador();
    Jugador(std::string nombre);
    ~Jugador();

    std::string getUsuario();
    void setUsuario();

    void agregarVencidos(Monstruo);
    void mostrarVencidos();


    void agregarVencidos(Monstruo *m);
    void mostrarVencidos();

private:
    std::string usuario;
    ListaLigada <Monstruo*> Vencidos;
}