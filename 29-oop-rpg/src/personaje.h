#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

#ifndef PERSONAJE_H
#define PERSONAJE_H

class Personaje {
protected:
    std::string nombre;
    int puntosDeVida;
    int nivel;
    int defensaFisica;
    int defensaMagica;
    int velocidadAtaque;
    int velocidadMovimiento;
    int rango;

public:
    Personaje(std::string nm, int pv, int nv, int df, int dm, int va, int vm, int rg) :
        nombre(nm), puntosDeVida(pv), nivel(nv), defensaFisica(df), defensaMagica(dm), velocidadAtaque(va), velocidadMovimiento(vm), rango(rg) {}

    virtual void toString() {
        std::cout << "---------------------------------" << std::endl;
        std::cout << "Nombre: " << nombre << "\nPuntos de Vida: " << puntosDeVida << "\nNivel: " << nivel
                  << "\nDefensa Física: " << defensaFisica << "\nDefensa Mágica: " << defensaMagica
                  << "\nVelocidad de Ataque: " << velocidadAtaque << "\nVelocidad de Movimiento: " << velocidadMovimiento
                  << "\nRango: " << rango << std::endl;
    }
};

#endif