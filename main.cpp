#include <iostream>
#define NUM_CUARTOS 20

int main (){
    Catalogo miCatalogo;
    Dungeon  miDungeon;

    if(!miCatalogo.loadFromCSV("monsters.csv")){
        std::cout << "No se pudo crear el catálogo " << std::endl;
        return 0;
    }

    std::cout << "Creando Dungeon ... " << endl;
    for (int c = 0; c < NUM_CUARTOS; c++){
        Monster *pMonster = nullptr, copiaMonstruo;

        pMonster = miCatalogo.getRandimMonster();
        if (!pMonster){
            std::cout << "No se pudo obtener un monstruo del catálogo" << std::endl;
            return 0;
        }

        copiaMonstruo = *pMonster;
        if (!miDungeon.createRoom(copiaMonstruo)){
            std::cout << "No se pudo insertar cuarto con monstruo al calabozo" << std::endl;
            return 0;
        }
    }

    miDungeon.imprimeCuartos();
    return 0;
}
