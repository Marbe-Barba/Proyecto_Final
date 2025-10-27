#pragma once

template <typename T, typename Compare>
BST<T, Compare>::BST() : raiz(nullptr), comp(Compare{}), n(0) {}

template <typename T, typename Compare>
BST<T, Compare>::~BST() {
    clear();
}

template <typename T, typename Compare>
void BST<T, Compare>::clearRec(typename BST<T, Compare>::Nodo* nd) {
    if (!nd) return;
    clearRec(nd->izq);
    clearRec(nd->der);
    delete nd;
}

template <typename T, typename Compare>
void BST<T, Compare>::clear() {
    clearRec(raiz);
    raiz = nullptr;
    n = 0;
}

template <typename T, typename Compare>
bool BST<T, Compare>::insertRec(typename BST<T, Compare>::Nodo*& nd, const T& dato) {
    if (!nd) {
        nd = new (std::nothrow) Nodo(dato);
        return nd != nullptr;
    }
    if (comp(dato, nd->dato)) {
        return insertRec(nd->izq, dato);
    } else if (comp(nd->dato, dato)) {
        return insertRec(nd->der, dato);
    } else {
        // Datos "equivalentes" según el comparador: rechazar duplicado
        return false;
    }
}

template <typename T, typename Compare>
bool BST<T, Compare>::insert(const T& dato) {
    if (insertRec(raiz, dato)) {
        ++n;
        return true;
    }
    return false;
}

template <typename T, typename Compare>
const T* BST<T, Compare>::getByInorderIndexRec(typename BST<T, Compare>::Nodo* nd,
                                               std::size_t k, std::size_t& idx) const {
    if (!nd) return nullptr;

    if (const T* left = getByInorderIndexRec(nd->izq, k, idx)) return left;

    if (idx == k) return &nd->dato;
    ++idx;

    return getByInorderIndexRec(nd->der, k, idx);
}

template <typename T, typename Compare>
const T* BST<T, Compare>::getByInorderIndex(std::size_t k) const {
    if (k >= n) return nullptr;
    std::size_t idx = 0;
    return getByInorderIndexRec(raiz, k, idx);
}
