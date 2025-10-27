#pragma once
#include <iostream>
#include <string>
#include "ArbolBinario.hpp"


class Catalogo {
public:
    Catalogo();
    ~Catalogo();

    bool cargarCSV(std::string& archivo); 

    Monstruo* obtenerMonstruoAleatorio();

    void mostrarCatalogo();

    void contarNodos(ArbolBinario<Monstruo>::Nodo* nodo, int& cont);
    void buscarPorNumero(ArbolBinario<Monstruo>::Nodo* nodo, int& cont, int elegido, Monstruo& resultado);

private:
    ArbolBinario<Monstruo> arbol;
};

