#pragma once
#include <iostream>
#iclude "Monstruo.hpp"

template <typename T>
class ListaLigada{
private:
    class Nodo{
    public:
        T dato;
        Nodo *next;

        Nodo(T nDato);
    };

    nodo *head;
public:
    ListaLigada();
    ~ListaLigada();

    bool insertarFinal(T dato);
    void borrarLista();
    void insertarOrdenado(T* obj) {
    void imprimeLista();

}

#include "ListaLigada.tpp"