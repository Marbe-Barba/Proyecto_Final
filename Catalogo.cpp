#include "Catalogo.hpp"
#include <fstream>
#include <sstream>
#include <iostream>

Catalogo::Catalogo() : generador(std::random_device{}()) {}

bool Catalogo::cargarDesdeCSV(const std::string& rutaArchivo) {
    std::ifstream archivo(rutaArchivo);
    if (!archivo.is_open()) {
        std::cerr << "❌ No se pudo abrir el archivo: " << rutaArchivo << "\n";
        return false;
    }

    std::string linea;
    std::getline(archivo, linea); // opcional: salta encabezado si lo hay

    std::size_t insertados = 0;

    while (std::getline(archivo, linea)) {
        if (linea.empty()) continue;

        std::istringstream ss(linea);
        std::string nam, typ, siz, al, acStr, hpStr, crStr, vidaStr;

        std::getline(ss, nam, ',');
        std::getline(ss, typ, ',');
        std::getline(ss, siz, ',');
        std::getline(ss, al, ',');
        std::getline(ss, acStr, ',');
        std::getline(ss, hpStr, ',');
        std::getline(ss, crStr, ',');
        std::getline(ss, vidaStr, ',');

        int ac = 0, hp = 0;
        double cr = 0.0, vida = 0.0;

        try { ac = std::stoi(acStr); }  catch(...) { ac = 0; }
        try { hp = std::stoi(hpStr); }  catch(...) { hp = 0; }
        try { cr = std::stod(crStr); }  catch(...) { cr = 0.0; }
        try { vida = std::stod(vidaStr);} catch(...) { vida = 0.0; }

        Monstruo nuevo(nam, typ, siz, al, ac, hp, cr, vida);

        if (arbol.insert(nuevo)) ++insertados;
    }

    archivo.close();
    std::cout << "📚 Se cargaron " << insertados << " monstruos en el catálogo.\n";
    return insertados > 0;
}

std::size_t Catalogo::cantidad() const {
    return arbol.size();
}

const Monstruo* Catalogo::getMonstruoAleatorio() {
    if (arbol.size() == 0) {
        std::cerr << "⚠️ No hay monstruos en el catálogo.\n";
        return nullptr;
    }

    std::uniform_int_distribution<std::size_t> dist(0, arbol.size() - 1);
    std::size_t indice = dist(generador);
    return arbol.getByInorderIndex(indice);
}

void Catalogo::mostrarCatalogo() const {
    std::cout << "=== CATÁLOGO DE MONSTRUOS ===\n";
    for (std::size_t i = 0; i < arbol.size(); ++i) {
        const Monstruo* m = arbol.getByInorderIndex(i);
        if (m) std::cout << i + 1 << ". " << *m << "\n";
    }
}
