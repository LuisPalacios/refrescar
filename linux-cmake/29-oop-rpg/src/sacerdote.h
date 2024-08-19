#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

#include "personaje.h"

class Sacerdote : public Personaje {
private:
    int fe;
    int sanacion;
    int maldicion;
    int bendicion;

public:
    Sacerdote(std::string nm, int pv, int nv, int df, int dm, int va, int vm, int rg, int fe, int san, int mald, int bend) :
        Personaje(nm, pv, nv, df, dm, va, vm, rg), fe(fe), sanacion(san), maldicion(mald), bendicion(bend) {}

    void curacion() {
        // Implementación de la habilidad
    }

    void proteccion() {
        // Implementación de la habilidad
    }

    void purificacion() {
        // Implementación de la habilidad
    }

    void toString() override {
        Personaje::toString();
        std::cout << "Fe: " << fe << "\nSanación: " << sanacion << "\nMaldición: " << maldicion << "\nBendición: " << bendicion << std::endl;
    }
};
