#include <iostream>
#include <cstdlib>
#include "monstruo.hpp"


template <typename T>

class catalogo{
private:
    class Nodo{
    public:
        T dato;
        Nodo<T> *izquierda;
        Nodo<T> *derecha;

        Nodo (T nDato);
    };

    int cantidad;
    void agregarRecursivo(Nodo*& nodo, T valor);
    void mostrarRecursivo(Nodo *nodo);
    void buscarNumero(Nodo* nodo, int& contador, int elegido, T& resultado);

public:
    catalogo();
    ~catalogo();
    
    void agregarFinal(T valor);
    void mostrar();
    T aleatorio();

    void agregarMonstruo (Monstruo m);
    void mostrarCatalogo();
    Monstruo generarAleatorio();
    void cargarCSV (std::string& nombreArchivo);

};

#include "catalogo.cpp"