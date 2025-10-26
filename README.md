# Proyecto Final

**Nombre del autor:** Marbella Barba De los Santos
**Matricula:** A01660946


```mermaid
classDiagram
  class Monstruo {
    +String nombre
    +String tipo
    +int fuerza
    +int salud
    +String atacar()
  }
  class Catalogo {
    +List<Monstruo> monstruos
    +cargarMonstruosCSV()
    +Monstruo elegirMonstruoAleatorio()
  }
  class Calabozo {
    +DoublyLinkedList<Cuarto> cuartos
    +generarCuartos()
    +asignarMonstruoACuarto()
  }
  class Cuarto {
    +Monstruo monstruo
    +String descripcion
    +mostrarMonstruo()
  }
  class Jugador {
    +String nombre
    +LinkedList<Monstruo> monstruosDerrotados
    +derrotarMonstruo(Monstruo monstruo)
    +verMonstruosDerrotados()
  }

  class ArbolBinario{
    +String nombre
    +LinkedList<Monstruo> monstruosDerrotados
    +derrotarMonstruo(Monstruo monstruo)
    +verMonstruosDerrotados()
  }
    
  class ListaLigada {
      +String nombre
      +LinkedList<Monstruo> monstruosDerrotados
      +derrotarMonstruo(Monstruo monstruo)
      +verMonstruosDerrotados()
  }

  class ListaLigadaDoble {
    +String nombre
    +LinkedList<Monstruo> monstruosDerrotados
    +derrotarMonstruo(Monstruo monstruo)
    +verMonstruosDerrotados()
  }

    
  Calabozo --> ListaLigadaDoble
  ListaLigadaDoble --> Cuarto
  Catalogo --> ArbolBinario
  Cuarto --> Catalogo
  ArbolBinario --> Monstruo
  Jugador --> ListaLigada
  ListaLigada --> Monstruo
```

