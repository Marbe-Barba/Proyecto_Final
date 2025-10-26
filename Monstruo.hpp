#include <iostream>
#include <string>

class monstruo {
public: 
    //se puede no poner el constructor sin parametros
    // si se van a utilizar los datos de la tabla, es necesario hacer las clases?
    monstruo();
    monstruo(string nam, string typ, string tamaño, string categoria, int clase, int golpe, double dificultad, double vida);

    std::string getName();
    std::string getType();
    std::string getSize();
    std::string getAlign();
    int getAC();
    int getHP();
    double getCR();
    double getPuntosDeVida();
    
    std::string setName(std::string newName);
    std::string setType(std::string newType);
    std::string setSize(std::string newSize);
    std::string setAlign(std::string newAlign);
    int setAC(int newAc);
    int setHP(int newHP);
    double setCR(double newCR);
    double setPuntosDeVida(double newVida);

    void mostrarInformacion();

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
}