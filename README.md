# Proyecto Final

**Nombre del autor:** Marbella Barba De los Santos
**Matricula:** A01660946


```mermaid
classDiagram
    class Monstruo {
        -name: string
        -type: string
        -size: string
        -align: string
        -ac: int
        -hp: int
        -cr: double
        -puntos_de_vida: double
        +Monstruo()
        +Monstruo(nam, typ, siz, al, a, h, c, vida)
        +getName(): string
        +getType(): string
        +getSize(): string
        +getAlign(): string
        +getAC(): int
        +getHP(): int
        +getCR(): double
        +getPuntosDeVida(): double
        +setName(newName: string)
        +setType(newType: string)
        +setSize(newSize: string)
        +setAlign(newAlign: string)
        +setAC(newAc: int)
        +setHP(newHP: int)
        +setCR(newCR: double)
        +setPuntosDeVida(newVida: double)
        +mostrarInformacion()
        +operator<(otro: Monstruo): bool
        +operator<<(ostream, Monstruo)
    }

class Catalogo {
       -arbol: ArbolBinario<Monstruo>
        +Catalogo()
        +~Catalogo()
        +cargarCSV(archivo: string): bool
        +obtenerMonstruoAleatorio(): Monstruo*
        +mostrarCatalogo()
}

class Cuartos {
-id: int
        -monstruo: Monstruo*
        +Cuartos()
        +Cuartos(idCuarto: int, m: Monstruo*)
        +getId(): int
        +setId(idCuarto: int)
        +getMonstruo(): Monstruo*
        +setMonstruo(m: Monstruo*)
        +mostrar()
        +operator<<(ostream, Cuartos)
}

class Calabozo {
     -cuartos: ListaDoble<Cuartos>
        +Calabozo()
        +Calabozo(c: Catalogo*)
        +~Calabozo()
        +generarCalabozo(c: Catalogo*)
        +mostrarCalabozo()
}

class Jugador {
        -usuario: string
        -vencidos: ListaLigada<Monstruo*>
        +Jugador()
        +Jugador(nombre: string)
        +~Jugador()
        +getUsuario(): string
        +setUsuario(nombre: string)
        +agregarVencidos(m: Monstruo*)
        +mostrarVencidos()
}


class ArbolBinario~T~ {
    -raiz: Nodo*
    +ArbolBinario()
    +~ArbolBinario()
    +inserta(dato: T)
    +BorrarArbol()
    +buscarPorNumero(elegido: int): T*
}

class ListaLigadaDoble~T~ {
    -head: Nodo*
    -tail: Nodo*
    +ListaDoble()
    +~ListaDoble()
    +insertarFinal(dato: T)
    +imprimeLista()
    +borrarLista()
}

class ListaLigada~T~ {
    -head: Nodo*
    +ListaLigada()
    +~ListaLigada()
    +insertarFinal(dato: T)
    +imprimeLista()
    +borrarLista()
}


Catalogo --> ArbolBinario~Monstruo~
ArbolBinario~Monstruo~ --> Monstruo

Cuartos --> Monstruo
Calabozo --> ListaLigadaDoble~Cuartos~
ListaLigadaDoble~Cuartos~ --> Cuartos

Jugador --> ListaLigada~Monstruo~
ListaLigada~Monstruo~ --> Monstruo
```

