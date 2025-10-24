#include <iostream>
#include <string>

class jugador {
public: 
    jugador();
    ~jugador();
    std::string getUsuario();
    int getVida();
    void setVida();
    bool estaVivo();
    void recibirDaño(int daño);
    int atacar ();
    void subirNivel();

private:
    std::string usuario;
    int vida;
    int ataque;
    int defensa;
    int nivel;

}