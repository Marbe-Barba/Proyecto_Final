#include "Catalogo.hpp"
#include <fstream>
#include <sstream>
#include <cstdlib> 
#include <ctime> 
#include <iostream>

Catalogo::Catalogo(){
    srand(time(nullptr));
}

Catalogo::~Catalogo(){}

bool Catalogo::cargarCSV(std::string Archivo) {
    std::ifstream monsters;

    monsters.open(Archivo, ios::in);
    if (monsters.is_open()==false) {
        std::cout << "No se pudo abrir el archivo: " << Archivo << "\n";
        return false;
    }

    std::string tmpCols;

    if(!getline(monsters,tmpCols)){
        std::cout << "El archivo no tiene header \n";
        monsters.close();
        return false;
    } 

    std::cout << "Cargando archivos de creaturas..." << endl;

    std::string linea;
    while (getline(monsters, linea)) {
        std::stringstream ss(linea);

        std::string name, type, size, align, tmp_ac, tmp_hp, tmp_cr;
        int ac, hp;
        double cr;

       if (getline(ss, name, ',') &&
            getline(ss, type, ',') &&
            getline(ss, size, ',') &&
            getline(ss, align, ',') &&
            getline(ss, tmp_ac, ',') &&
            getline(ss, tmp_hp, ',') &&
            getline(ss, tmp_cr, ',')) {

            ac = std::stoi(tmp_ac);
            hp = std::stoi(tmp_hp);
            cr = std::stod(tmp_cr);

            Monstruo m(name, type, size, align, ac, hp, cr);
            arbol.inserta(m);
        }
    }

    monsters.close();
    std::cout << "Carga completada.\n";
    return true;
}

Monstruo* Catalogo::obtenerMonstruoAleatorio() {
    int total = 0;
    contarNodos(arbol.raiz, total); 

    if (total == 0) return nullptr;

    int elegido = rand() % total + 1;
    int contador = 0;
    Monstruo resultado;

    buscarPorNumero(arbol.raiz, contador, elegido, resultado);

    return new Monstruo(resultado); 
}


void Catalogo::contarNodos(ArbolBinario<Monstruo>::Nodo* nodo, int& cont){
    if (!nodo) return;
    contarNodos(nodo->izq, cont);
    cont++;
    contarNodos(nodo->der, cont);
}

void Catalogo::buscarPorNumero(ArbolBinario<Monstruo>::Nodo* nodo, int& cont, int elegido, Monstruo& resultado){
    if (!nodo) return;
    buscarPorNumero(nodo->izq, cont, elegido, resultado);
    cont++;
    if (cont == elegido) {
        resultado = nodo->dato;
        return;
    }
    buscarPorNumero(nodo->der, cont, elegido, resultado);
}