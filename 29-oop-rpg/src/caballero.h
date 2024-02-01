#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

#include "personaje.h"

class Caballero : public Personaje {
private:
    int resistenciaEncantamiento;
    int regeneracionVida;
    int sanacion;
    int habilidadLanza;
    int habilidadEspada;

public:
    Caballero(std::string nm, int pv, int nv, int df, int dm, int va, int vm, int rg, int resEnc, int regVida, int san, int habLanza, int habEspada) :
        Personaje(nm, pv, nv, df, dm, va, vm, rg), resistenciaEncantamiento(resEnc), regeneracionVida(regVida), sanacion(san), habilidadLanza(habLanza), habilidadEspada(habEspada) {}

    void carga() {
        // Implementación de la habilidad
    }

    void intimidar() {
        // Implementación de la habilidad
    }

    void fortalecer() {
        // Implementación de la habilidad
    }

    void toString() override {
        Personaje::toString();
        std::cout << "Resistencia a Encantamiento: " << resistenciaEncantamiento << "\nRegeneración de Vida: " << regeneracionVida << "\nSanación: " << sanacion << "\nHabilidad con Lanza: " << habilidadLanza << "\nHabilidad con Espada: " << habilidadEspada << std::endl;
    }
};
