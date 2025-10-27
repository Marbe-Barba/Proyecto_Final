#include <iostream>
#pragma once
#include <string>
#include <random>
#include "Monstruo.hpp"
#include "ArbolBinario.hpp"

// Comparador por nombre para el BST
struct ComparadorMonstruo {
    bool operator()(const Monstruo& a, const Monstruo& b) const {
        return a.getName() < b.getName();
    }
};

class Catalogo {
public:
    Catalogo();

    bool cargarDesdeCSV(const std::string& rutaArchivo); // carga los monstruos desde CSV
    const Monstruo* getMonstruoAleatorio();               // retorna puntero a monstruo aleatorio
    std::size_t cantidad() const;                         // retorna cuántos monstruos hay
    void mostrarCatalogo() const;                         // imprime todos los monstruos ordenados

private:
    BST<Monstruo, ComparadorMonstruo> arbol;
    std::mt19937 generador;                               // generador de números aleatorios
};

