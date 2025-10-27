#pragma once
#include <iostream>
#include "Monstruo.hpp"

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
    bool insert(const T& dato);           // inserta (rechaza duplicados según Compare == estricto)
    std::size_t size() const { return n; }
    void clear();

    // Devuelve puntero al elemento en índice k del recorrido in-order (0..n-1); nullptr si k inválido
    const T* getByInorderIndex(std::size_t k) const;

private:
    static void clearRec(Nodo* n);
    bool insertRec(Nodo*& n, const T& dato);
    const T* getByInorderIndexRec(Nodo* n, std::size_t k, std::size_t& idx) const;
};


#include "ArbolBinario.tpp"















#include "ArbolBinario.tpp"
