#pragma once
#include <iostream>
#include <string>

class Monstruo {
public: 
    Monstruo();
    Monstruo(std::string nam, std::string typ, std::string siz, std::string al, int a, int h, double c, double vida);

    std::string getName();
    std::string getType();
    std::string getSize();
    std::string getAlign();
    int getAC();
    int getHP();
    double getCR();
    double getPuntosDeVida();
    
    void setName(std::string newName);
    void setType(std::string newType);
    void setSize(std::string newSize);
    void setAlign(std::string newAlign);
    void setAC(int newAc);
    void setHP(int newHP);
    void setCR(double newCR);
    void setPuntosDeVida(double newVida);

    void mostrarInformacion();
    
    bool operator<(Monstruo& otro){
        return name < otro.name;
    }

    friend std::ostream& operator<<(std::ostream& os, const Monstruo& monstruo){
        os << monstruo.name << ", type : " << monstruo.type << ", size : " << monstruo.size << ", align : " << monstruo.align << ", ac : " << monstruo.ac << ", hp : " << monstruo.hp << ", cr : " << monstruo.cr << ", vida : " << monstruo.puntos_de_vida;
        return os;
    };

private:
//Atributos del monstruo
    std::string name;
    std::string type;
    std::string size;
    std::string align;
    int ac;
    int hp;
    double cr;
    double puntos_de_vida;
};