#pragma once
#include <iostream>
#include "Monstruo.hpp"

template <typename T>
class ArbolBinario {
private: 
    class Nodo {
    public:
        T dato;
        Nodo* izq;
        Nodo* der;

        Nodo(T nDato);
    };

Nodo *raiz;

public:
    ArbolBinario();
    ~ArbolBinario();
    T* buscaElenento(T nDato);
    bool inserta(T nDato);
    bool BorrarArbol();
    Nodo* BorrarArbolRecursivo(Nodo* actual);
};


#include "ArbolBinario.tpp"