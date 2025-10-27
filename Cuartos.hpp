#pragma once
#include <iostream>
#include "Monsruo.hpp"

class Cuartos {
public: 
    Cuartos();
    Cuartos(int idCuarto, Monstruo* m);
    ~Cuartos();

    int getId();
    void setId(int idCuarto);

    Monstruo* getMonstruo();
    setMonstruo(Monstruo* m);

    void mostrar();
    
    friend std::ostream& operator<<(std::ostream& os, const Cuarto& room){
        os << "Cuarto con: " << room.monstruo;
        return os;
    }

private:
    int id;
    Monstruo* monstruo;
}