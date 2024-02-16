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

#include "arquero.h"
#include "caballero.h"
#include "guerrero.h"
#include "mago.h"
#include "picaro.h"
#include "sacerdote.h"

// Continuación del código anterior...

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

