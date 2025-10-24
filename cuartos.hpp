#include <iostream>

class cuartos {
public: 
    cuartos();
    ~cuartos();
    void agregarMonstruo(monstruo& m);
    std::string getDescripcion();
    voir explorar(Jugador& jugador)
private:
    std::string descripcion;
    Monstruo* monstruo;
    bool explorando;

}