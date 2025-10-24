#include <iostream>

class monstruo {
public: 
    monstruo();
    ~monstruo();
    std::string getNombre();
    std::string getTipo();
    std::string getTamaño();
    std::string getCategoria();
    int getClaseDeArmadura();
    int getPuntosDeGolpe();
    double getDificultadPelea();
    double getPuntosDeVida();
    void mostrarInformacion();
    void recibirDaño();
    double Vida();


private:
//Atributos del monstruo
    std::string nombre;
    std::string tipo;
    std::string tamaño;
    std::string categoria;
    int clase_de_armadura;
    int puntos_de_golpe;
    double dificultad_pelea;
    double puntos_de_vida;

}