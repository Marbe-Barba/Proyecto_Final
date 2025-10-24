#include "monstruo.hpp"
#include <iostream>


// preguntar si hay un monstruo que pueda usar como base para mi constructor
monstruo::monstruo(){
    nombre = "No identificado";
    tipo = "No identificado";
    tamaño = "No identificado";
    categoria = "No identificada";
    clase_de_armadura = 0;
    puntos_de_golpe = 0;
    dificultad_pelea = 0;
    puntos_de_vida = 0;
}

monstruo::~monstruo(){

}

std::string monstruo::getNombre {
    return nombre;
}

std::string monstruo::getTipo {
    return tipo;
}

std::string monstruo::getTamaño{
    return tamaño;
}

std::string monstruo::getCategoria {
    return categoria;
}

int monstruo::getPuntosDeGolpe {
    return puntos_de_golpe;
}

int monstruo::getDificultadPelea {
    return dificultad_pelea;
}

int monstruo::getPuntosDeVida {
    return puntos_de_vida;
}

void monstruo::mostrarInformacion(){
    std::cout << " El nombre del mounstro es: " << nombre << std::endl;
    std::cout << " es de tipo: " << tipo << std::endl;
    std::cout << " su tamaño es: " << tamaño << std::endl;
    std::cout << " su align es: " << categoria << std::endl;
    std::cout << " su ac es: " << clase_de_armadura << std::endl;
    std::cout << " su hp es: " << puntos_de_golpe << std::endl;
    std::cout << " la dificultad de la pelea es: " << dificultad_pelea << std::endl;

}

//preguntar si este método esta bien
void monstruo::recibirDaño(){
    double daño;
    std::cout << "El daño recibido es de: "
    std::cin >> daño;
    puntos_de_vida -= daño;
    if (puntos_de_vida < 0){
        puntos_de_vida = 0
    }
}

double monstruo::Vida() {
    return puntos_de_vida;
}