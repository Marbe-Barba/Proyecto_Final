#include "Monstruo.hpp"
#include <iostream>


Monstruo::Monstruo(){
    name = "Desconocido";
    type = "N/A";
    size = "N/A";
    align = "N/A";
    ac = 0;
    hp = 0;
    cr = 0;
    puntos_de_vida = 0;
}

Monstruo::Monstruo(string nam, string typ, string siz, string al, int a, int h, double c, double vida){
    name = nam;
    type = typ; 
    size = siz; 
    align = al;
    ac = a;
    hp = h;
    cr = c;
    puntos_de_vida = vida;
}

std::string Monstruo::getName() {
    return name;
}

std::string Monstruo::getType() {
    return type;
}

std::string Monstruo::getSize(){
    return size;
}

std::string Monstruo::getAlign() {
    return align;
}

int Monstruo::getAC (){
    return ac;
}

int Monstruo::getHP() {
    return hp;
}

double Monstruo::getCR() {
    return cr;
}

double Monstruo::getPuntosDeVida () {
    return puntos_de_vida;
}

void Monstruo::setName(std::string newName) {
    name = newName;
}

void Monstruo::setType(std::string newType) {
    type = newType;
}

void Monstruo::setSize(std::string newSize){
    size = newSize;
}

void Monstruo::setAlign(std::string newAlign) {
    align = newAlign;
}

void Monstruo::setAC(int newAc){
    ac = newAc;
}

void Monstruo::setHP(int newHP) {
    hp = newHP;
}

void Monstruo::setCR(double newCR) {
    cr = newCR;
}

void Monstruo::setPuntosDeVida(double newVida) {
    puntos_de_vida = newVida;
}

void Monstruo::mostrarInformacion(){
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




