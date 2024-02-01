#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

#include "personaje.h"

class Guerrero : public Personaje {
private:
    int fuerza;
    int regeneracionVida;
    int bloqueo;

public:
    Guerrero(std::string nm, int pv, int nv, int df, int dm, int va, int vm, int rg, int fz, int regVida, int blq) :
        Personaje(nm, pv, nv, df, dm, va, vm, rg), fuerza(fz), regeneracionVida(regVida), bloqueo(blq) {}

    void intimidacion() {
        // Implementación de la habilidad
    }

    void embestida() {
        // Implementación de la habilidad
    }

    void toString() override {
        Personaje::toString();
        std::cout << "Fuerza: " << fuerza << "\nRegeneración de Vida: " << regeneracionVida << "\nBloqueo: " << bloqueo << std::endl;
    }
};
