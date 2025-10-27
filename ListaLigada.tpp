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
bool ListaLigada<T>::insertarFinal(T dato) {
    Nodo* nuevo = new (std::nothrow) Nodo{
        Nodo = dato;
    } 

    if (nuevo == nullptr){
        return false;
    }

    if (head == nullptr) {
        head = nuevo;
        return true;
    }

    Nodo* temporal = head;
    while (temporal->next){
        temporal = temporal->next;
    }
    temporal->next = nuevo;
    return true;
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

/*template <typename T>
void ListaLigada<T>::insertarOrden(T dato, Comparador comparar){
    Nodo *nuevo = new (std::nothrow) Nodo {
        Nodo = dato;
    }

    if (nuevo == nullptr){
        return false;
    }

    if (head == nullptr || comparar(dato, head->dato)){
        nuevo->next = head;
        head = nuevo;
        return true;
    }


}
*/

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

