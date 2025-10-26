#include "monstruo.hpp"
#include <iostream>


// preguntar si hay un monstruo que pueda usar como base para mi constructor
monstruo::monstruo(){
    nombre = "Desconocido";
    tipo = "N/A";
    tamaño = "N/A";
    categoria = "N/A";
    clase_de_armadura = 0;
    puntos_de_golpe = 0;
    dificultad_pelea = 0;
    puntos_de_vida = 0;
}

monstruo::monstruo(std::string n, std::string t, std::string ta, std::string c, int ac, int hp, double cr, double vida){
    nombre = n;
    tipo = t; 
    tamaño = ta; 
    categoria = c;
    clase_de_armadura = ac;
    puntos_de_golpe = hp;
    dificultad_pelea = dif;
    puntos_de_vida = vida;
}

monstruo::~monstruo(){

}

std::string monstruo::getName() {
    return name;
}

std::string monstruo::getType() {
    return type;
}

std::string monstruo::getSize(){
    return size;
}

std::string monstruo::getAlign() {
    return align;
}

int monstruo::getAC (){
    return ac;
}

int monstruo::getHP() {
    return hp;
}

int monstruo::getCR() {
    return cr;
}

int monstruo::getPuntosDeVida () {
    return puntos_de_vida;
}

void monstruo::mostrarInformacion(){
    std::cout << "=== Información del monstruo ===\n";
    std::cout << " Nombre: " << name << std::endl;
    std::cout << " Tipo: " << type << std::endl;
    std::cout << " Tamaño: " << size << std::endl;
    std::cout << " Align: " << align << std::endl;
    std::cout << " AC: " << ac << std::endl;
    std::cout << " HP: " << hp << std::endl;
    std::cout << " Dificultad de la pelea: " << cr << std::endl;
    std::cout << " Puntos de vida actuales: " << puntos_de_vida << std::endl;
}

//preguntar si este método esta bien
void monstruo::recibirDaño(double daño){
    double daño;
    std::cout << "El daño recibido es de: "
    std::cin >> daño;
    puntos_de_vida -= daño;
    if (puntos_de_vida < 0){
        puntos_de_vida = 0;
        std::cout << nombre << "ha perdido la batalla. \n";
    }
}

// hay algúna formula de daño en especifico???
double monstruo::atacar(){
    double posibledaño 
    posibledaño = puntos_de_golpe * 0.2 + dificultad_pelea * 5;
    std::cout << nombre << " atacó con " << posibledaño << "puntos de daño. \n";
    return posibledaño;
}
