#include <iostream>
#include "ListaLigada.hpp"

template <typename T>
ListaLigada<T>::Nodo::Nodo (T nDato){
    dato = nDato
    next = nullptr;
}

template <typename T>
ListaLigada<T>::ListaLigada(){
    head = nullptr;
}

template <typename T>
ListaLigada<T>::~ListaLigada() {
    borrarLista();
}

template <typename T>
void ListaLigada<T>::borrarLista() {
    Nodo* temporal;
    while (head) {
        temporal = head;
        head = head->next;
        delete temporal;
    }
    head = nullptr;
}

template <typename T>
void ListaLigada<T>::insertarOrdenado(T* obj) {
    Nodo* nuevo = new Nodo(obj);
    if (!head || obj->getName() < head->dato->getName()) {
        nuevo->next = head;
        head = nuevo;
        return;
    }
    Nodo* actual = head;
    while (actual->next && actual->next->dato->getName() < obj->getName()) {
        actual = actual->next;
    }
    nuevo->next = actual->next;
    actual->next = nuevo;
}

template <typename T>
void ListaLigada<T>::imprimeLista() const {
    Nodo* temporal = head;
    while (temporal) {
        std::cout << temporal->dato;
        if (temporal->next){ 
            std::cout << ", -> ";
        }
        temporal = temporal->next;
    }
}

