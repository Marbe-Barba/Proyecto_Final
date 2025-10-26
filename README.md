# Proyecto Final

**Nombre del autor:** Marbella Barba De los Santos
**Matricula:** A01660946


```mermaid
classDiagram
class Monstruo {
  - string name
  - string type
  - string size
  - string align
  - int ac
  - int hp
  - double cr
  - double puntos_de_vida
  + getName() string
  + getType() string
  + getSize() string
  + getAlign() string
  + getAC() int
  + getHP() int
  + getCR() double
  + getPuntosDeVida() double
  + setName(string n) string
  + setType(string t) string
  + setSize(string s) string
  + setAlign(string al) string
  + setAC(int a) int
  + setHP(int h) int
  + setCR(int c) double
  + setPuntosDeVida (int p) double
  + mostrarInformacion() void
}

class Catalogo {
  - ArbolBinario<Monstruo> arbolito
  + subirDesdeCSV(monsters.csv string)
  + obtenerMontruoAleatorio() Monstruo
}

class Cuartos {
  - Monstruo monstruo
  + insertarMonstruo() void
  + getMonstruo() Monstruo
}

class Calabozo {
  - ListaLigada<Cuartos> cuartos
  + mostrarCalabozo()

}

class Jugador {
  - string usuario
  - ListaLigada<Monstruo> Vencidos
  + agregarVencidos (Monstruo)
  + muestraVencidos()
}


class ArbolBinario~T~ {

}

class ListaLigadaDoble~T~ {
  - Node* comiezo
  - Node* final
  + append(T)
  + print()
}

class ListaLigada~T~ {
  - Node* head
  + ListaLigada()
  + ~ListaLigada()
  + borrarLista()
  + mostarLista()
}


Catalogo --> ArbolBinario~Monstruo~
ArbolBinario~Monstruo~ --> Monstruo

Cuartos --> Monstruo
Calabozo --> ListaLigadaDoble~Cuartos~
ListaLigadaDoble~Cuartos~ --> Cuartos

Jugador --> ListaLigada~Monstruo~
ListaLigada~Monstruo~ --> Monstruo
```

