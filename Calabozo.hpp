#include <iostream>
#include "ListaLigadaDoble.hpp"


class Calabozo {
public: 
    Calabozo();
    Calabozo(Catalogo* cat);  
    ~Calabozo();


    void generarCalabozo(Catalogo* cat);  
    void mostrarCalabozo();   

private:
    ListaDoble<Cuartos> cuartos;
}