#pragma once

template <typename T>
ArbolBinario<T>::Nodo::Nodo(T nDato){
    dato = nDato
    izq = nullptr;
    der = nullptr;
} 

template <typename T>
ArbolBinario<T>::ArbolBinario() {
    raiz = nullptr;
}

template <typename T>
ArbolBinario<T>::~ArbolBinario() {
    BorrarArbol(); 
}

template <typename T>
bool ArbolBinario<T>::inserta(T nDato) {
    if (!raiz) {
        raiz = new Nodo(nDato);
        return true;
    }

    Nodo* actual = raiz;
    while (true) {
        if (nDato < actual->dato) {
            if (!actual->izq) {
                actual->izq = new Nodo(nDato);
                return true;
            }
            actual = actual->izq;
        } else {
            if (!actual->der) {
                actual->der = new Nodo(nDato);
                return true;
            }
            actual = actual->der;
        }
    }
}

template <typename T>
ArbolBinario::Nodo* ArbolBinario<T>::BorrarArbolRecursivo(Nodo* actual) {
    if(!actual){
        return nullptr;
    }

    actual->izq = BorrarArbolRecursivo(actual->izq);
    actual->der = BorrarArbolRecursivo(actual->der);

    delete actual;
    return nullptr;
}