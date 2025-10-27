#include "Cuartos.hpp"
#include <iostream>

Cuartos::Cuartos()
    : id(-1), monstruo(nullptr) {}

Cuartos::Cuartos(int idCuarto, Monstruo* m)
    : id(idCuarto), monstruo(m) {}

int Cuartos::getId() const {
    return id;
}

void Cuartos::setId(int idCuarto) {
    id = idCuarto;
}

const Monstruo* Cuartos::getMonstruo() const {
    return monstruo;
}

void Cuartos::setMonstruo(const Monstruo* m) {
    monstruo = m;
}

void Cuarto::mostrar() const {
    std::cout << "Cuarto " << id << " contiene: " << monstruo << std::endl;
}

