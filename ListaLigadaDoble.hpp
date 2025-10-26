#pragma once
#include <iostream>
#iclude "Cuartos.hpp"

template <typename T>
class ListaLigadaDoble{
private:
    class Nodo{
    public:
        T dato;
        Nodo *next;
        Nodo *prev;

        Nodo(T nDato);
    };

    nodo *head;
    nodo *tail;

public:
    ListaLigadaDoble();
    ~ListaLigadaDoble();
    bool insertarFinal(T dato);
    void imprimeLista();
    void borrarLista();
    bool eliminaElemento(T dato);

}

#include "ListaLigada.tpp"