#pragma once
#include <iostream>
#include "Cuartos.hpp"

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

    Nodo *head;
    Nodo *tail;

public:
    ListaLigadaDoble();
    ~ListaLigadaDoble();
    bool insertarFinal(T dato);
    void imprimeLista();
    void borrarLista();
    
};

#include "ListaLigada.tpp"