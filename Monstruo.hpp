#include <iostream>
#include <string>

class monstruo {
public: 
    //se puede no poner el constructor sin parametros
    // si se van a utilizar los datos de la tabla, es necesario hacer las clases?
    monstruo();
    monstruo(std::string nombre, std::string tipo, std::string tamaño, std::string categoria, int clase, int golpe, double dificultad, double vida);

    std::string getName();
    std::string getType();
    std::string getSize();
    std::string getAlign();
    int getAC();
    int getHP();
    double getCR();
    double getPuntosDeVida();

    void mostrarInformacion();
    void recibirDaño(double daño);
    double atacar();

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