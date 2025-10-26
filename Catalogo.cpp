#include "catalogo.hpp"

template <typename T>
catalogo<T>::catalogo() {
    raiz = nullptr;
    cantidad = 0;
}

template <typename T>
catalogo<T>::~catalogo() {}

template <typename T>
void catalogo<T>::insertarRec(Nodo<T>*& nodo, T dato) {
    if (!nodo) {
        nodo = new Nodo<T>(dato);
        cantidad++;
    } else if (dato.getNombre() < nodo->dato.getNombre()) {
        insertarRec(nodo->izq, dato);
    } else {
        insertarRec(nodo->der, dato);
    }
}

template <typename T>
void catalogo<T>::insertar(T dato) {
    insertarRec(raiz, dato);
}

template <typename T>
void catalogo<T>::mostrarRec(Nodo<T>* nodo) const {
    if (!nodo) return;
    mostrarRec(nodo->izq);
    nodo->dato.mostrarInformacion();
    mostrarRec(nodo->der);
}

template <typename T>
void catalogo<T>::mostrar() const {
    if (!raiz) {
        std::cout << "El catálogo está vacío.\n";
        return;
    }
    mostrarRec(raiz);
}

template <typename T>
int catalogo<T>::contar() const {
    return cantidad;
}

template <typename T>
void catalogo<T>::recorrerYSeleccionar(Nodo<T>* nodo, int& contador, int elegido, T& resultado) const {
    if (!nodo) return;
    recorrerYSeleccionar(nodo->izq, contador, elegido, resultado);
    contador++;
    if (contador == elegido) {
        resultado = nodo->dato;
        return;
    }
    recorrerYSeleccionar(nodo->der, contador, elegido, resultado);
}

template <typename T>
T catalogo<T>::elegirAleatorio() const {
    if (!raiz) {
        std::cout << "El catálogo está vacío.\n";
        exit(1);
    }
    int elegido = (rand() % cantidad) + 1;
    int contador = 0;
    T resultado;
    recorrerYSeleccionar(raiz, contador, elegido, resultado);
    return resultado;
}