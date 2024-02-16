/*

Programa en C++ OOP

Crea un Juego RPG y con los siguientes personajes: 
mago, guerrero, arquero, sacerdote‚ picaro y caballero

Todos los personajes constan de:
nombre, puntos de vida, nivel, defensa física y mágica, 
velocidad de ataque, velocidad de movimiento, rango


guerrero: tiene stats adicionales de fuerza, regeneración de vida, bloqueo
arquero: tiene stats adicionales de habilidad de arco, críticos, precisión, evasión
mago: tiene stats adicionales de mana, inteligencia, regeneración de mana, control de mana
sacerdote: tiene stats adicionales de fe, sanacion, maldicion y bendición
picaro: tiene stats adicinoales de destreza, sigilo, evasión, criticos
caballero: tiene stats adicinoales de resistencia a encantamiento, regeneración de vida, sanación, habilidad con lanza, habilidad de espada

Adicionalmente cada personaje puede tener las siguientes habilidades especiales: 

guerrero: intimidación(), embestida()
arquero: flechaVenenosa(), disparoPreciso(), trampas()
mago: invocacion(), bolaDeFuego(), Maldicion(), teletransporte();
sacerdote: curacion(), proteccion()‚ purificacion()
picaro: golpeCritico(), ataqueFurtivo(), voltereta()
caballero: carga(), intimidar(), fortalecer()

*/

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

#include "guerrero.h"

// Continuación del código anterior...

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


int main() {
    Guerrero g1("Thorin", 100, 1, 15, 10, 5, 4, 2, 20, 3, 5);
    g1.toString();

    Arquero a1("Legolas", 85, 1, 12, 8, 6, 5, 3, 18, 4, 15, 10);
    a1.toString();

    Mago m1("Gandalf", 70, 1, 6, 15, 4, 3, 1, 100, 20, 5, 10);
    m1.toString();

    Sacerdote s1("Elrond", 90, 1, 10, 20, 3, 4, 1, 25, 30, 5, 10);
    s1.toString();

    Picaro p1("Bilbo", 80, 1, 8, 12, 7, 6, 2, 22, 20, 15, 10);
    p1.toString();

    Caballero c1("Aragorn", 110, 1, 20, 15, 5, 3, 2, 10, 8, 5, 20, 15);
    c1.toString();


    // Crear y probar objetos de Sacerdote, Picaro, Caballero...

    return 0;
}

