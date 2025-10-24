#include "cuartos.hpp"
#include "ListaDoble.hpp"


class calabozo {
public: 
    calabozo(Jugador j);
    ~calabozo();
    void generarCuartos(int n);
    void iniciar();
    
private:
    ListaDoble<Cuarto> cuartos;
    Jugador jugador;
    Catalogo catalogo;

}