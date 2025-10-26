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

monstruo::monstruo(string nam, string typ, string siz, string al, int a, int h, double c, double vida){
    nombre = nam;
    tipo = typ; 
    tamaño = siz; 
    categoria = al;
    clase_de_armadura = a;
    puntos_de_golpe = h;
    dificultad_pelea = c;
    puntos_de_vida = vida;
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

std::string monstruo::setName(std::string newName) {
    name = newName;
}

std::string monstruo::setType(std::string newType) {
    type = newType;
}

std::string monstruo::setSize(std::string newSize){
    size = newSize;
}

std::string monstruo::setAlign(std::string newAlign) {
    align = newAlign;
}

int monstruo::setAC(int newAc){
    ac = newAc;
}

int monstruo::setHP(int newHP) {
    hp = newHP;
}

double monstruo::setCR(double newCR) {
    cr = newCR;
}

double monstruo::setPuntosDeVida(double newVida) {
    puntos_de_vida = newVida;
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




