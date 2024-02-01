#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

#include "personaje.h"

class Mago : public Personaje {
private:
    int mana;
    int inteligencia;
    int regeneracionMana;
    int controlMana;

public:
    Mago(std::string nm, int pv, int nv, int df, int dm, int va, int vm, int rg, int mn, int intel, int regMana, int ctrlMana) :
        Personaje(nm, pv, nv, df, dm, va, vm, rg), mana(mn), inteligencia(intel), regeneracionMana(regMana), controlMana(ctrlMana) {}

    void invocacion() {
        // Implementación de la habilidad
    }

    void bolaDeFuego() {
        // Implementación de la habilidad
    }

    void maldicion() {
        // Implementación de la habilidad
    }

    void teletransporte() {
        // Implementación de la habilidad
    }

    void toString() override {
        Personaje::toString();
        std::cout << "Mana: " << mana << "\nInteligencia: " << inteligencia << "\nRegeneración de Mana: " << regeneracionMana << "\nControl de Mana: " << controlMana << std::endl;
    }
};
