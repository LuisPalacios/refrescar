#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

#include "personaje.h"

class Arquero : public Personaje {
private:
    int habilidadArco;
    int criticos;
    int precision;
    int evasion;

public:
    Arquero(std::string nm, int pv, int nv, int df, int dm, int va, int vm, int rg, int ha, int crit, int prec, int eva) :
        Personaje(nm, pv, nv, df, dm, va, vm, rg), habilidadArco(ha), criticos(crit), precision(prec), evasion(eva) {}

    void flechaVenenosa() {
        // Implementación de la habilidad
    }

    void disparoPreciso() {
        // Implementación de la habilidad
    }

    void trampas() {
        // Implementación de la habilidad
    }

    void toString() override {
        Personaje::toString();
        std::cout << "Habilidad de Arco: " << habilidadArco << "\nCríticos: " << criticos << "\nPrecisión: " << precision << "\nEvasión: " << evasion << std::endl;
    }
};
