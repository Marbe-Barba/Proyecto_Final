#pragma once
#include <iostream>

using namespace std;

template <typename T>
class ArbolBinario {
private: 
    class Nodo {
    public:
        T dato;
        Nodo* izq;
        Nodo* der;

        Nodo(T valor);
    };

public:
    ArbolBinario();
    ~ArbolBinario();
};


















#include "ArbolBinario.tpp"
