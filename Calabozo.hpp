#pragma once
#include <iostream>
#include "ListaLigadaDoble.hpp"
#include "Catalogo.hpp"


class Calabozo {
public: 
    Calabozo();
    Calabozo(Catalogo* c);  
    ~Calabozo();


    void generarCalabozo(Catalogo* c);  
    void generarCuartos(Catalogo* ca)
    void mostrarCalabozo();   

private:
    ListaDoble<Cuartos> cuartos;
}