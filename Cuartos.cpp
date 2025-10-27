#include "Cuartos.hpp"
#include <iostream>

Cuartos::Cuartos(){
    id = -1;
    monstruo = nullptr;
}

Cuartos::Cuartos(int idCuarto, Monstruo* m){
    id = idCuarto; 
    monstruo = m;
}

int Cuartos::getId(){
    return id;
}

void Cuartos::setId(int idCuarto) {
    id = idCuarto;
}

Monstruo* Cuartos::getMonstruo(){
    return monstruo;
}

void Cuartos::setMonstruo(Monstruo* m) {
    monstruo = m;
}

void Cuarto::mostrar(){
    if (monstruo){
        std::cout << "El cuarto " << id << " tiene: " ;
        std::cout << *monstruo << "\n";
    } else {
        std::cout << "No se encontró ningún monstruo \n";
    }
}

