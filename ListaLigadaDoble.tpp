#pragma once
#include "ListaLigadaDoble.hpp"

template <typename T>
ListaLigadaDoble<T>::Nodo::Nodo(T nDato){
    dato = nDato; 
    next = nullptr;
    prev = nullptr;
}

template <typename T>
ListaLigadaDoble<T>::ListaLigadaDoble(){
    head = nullptr; 
    tail = nullptr; 
}

template <typename T>
ListaLigadaDoble<T>::~ListaLigadaDoble() {
    borrarLista();
}

template <typename T>
bool ListaLigadaDoble<T>::insertarFinal(const T& dato) {
    Nodo* nuevo = new (std::nothrow) Nodo(dato);

    if (!nuevo){
        return false;
    }

    if (head == nullptr) {
        head = nuevo;
        tail = nuevo;
        return true;
    }

    nuevo->prev = tail;
    tail->next  = nuevo;
    tail        = nuevo;
    return true;
}

template <typename T>
void ListaLigadaDoble<T>::imprimeLista(){
    const Nodo* temporal = head;
    while (temporal) {
        std::cout << temporal->dato;          
        if (temporal->next){
            std::cout << " <-> ";
        }
        temporal = temporal->next;
    }
}

template <typename T>
void ListaLigadaDoble<T>::borrarLista() {
    Nodo* temporal = head;
    while (temporal) {
        Nodo* nx = temporal->next;
        delete temporal;
        temporal = nx;
    }
    head = nullptr;
    tail = nullptr;
}

