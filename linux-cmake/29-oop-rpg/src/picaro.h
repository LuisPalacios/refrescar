#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

#include "personaje.h"

class Picaro : public Personaje {
private:
    int destreza;
    int sigilo;
    int evasion;
    int criticos;

public:
    Picaro(std::string nm, int pv, int nv, int df, int dm, int va, int vm, int rg, int dest, int sig, int eva, int crit) :
        Personaje(nm, pv, nv, df, dm, va, vm, rg), destreza(dest), sigilo(sig), evasion(eva), criticos(crit) {}

    void golpeCritico() {
        // Implementación de la habilidad
    }

    void ataqueFurtivo() {
        // Implementación de la habilidad
    }

    void voltereta() {
        // Implementación de la habilidad
    }

    void toString() override {
        Personaje::toString();
        std::cout << "Destreza: " << destreza << "\nSigilo: " << sigilo << "\nEvasión: " << evasion << "\nCríticos: " << criticos << std::endl;
    }
};

