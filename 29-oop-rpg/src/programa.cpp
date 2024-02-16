/*

Programa en C++ OOP

Supongamos que queremos crear un Juego RPG y queremos crear distintos personajes para dicho juego
por ejemplo mago, guerrero, arquero, sacerdote‚ picaro y caballero

Todos los personajes constan de nombre, puntos de vida, nivel, defensa física y mágica, velocidad de ataque y movimiento, rango

guerrero: tiene stats adicionales de fuerza, regeneración de vida, bloqueo
arquero: tiene stats adicionales de habilidad de arco, críticos, precisión, evasión
sacerdote: tiene stats adicionales de fe y sanacion, maldicion y bendición
picaro: destreza, sigilo, evasión, criticos
caballero: resistencia a encantamiento, regeneración de vida, sanación, habilidad con lanza, habilidad de espada

Adicionalmente cada personaje puede tener habilidades especiales

guerrero: intimidación(), embestida()
arquero: flechaVenenosa(), disparoPreciso(), trampas()
mago: invocacion(), bolaDeFuego(), Maldicion(), teletransporte();
sacerdote: curacion(), proteccion() ‚purificacion()
picaro: golpeCritico(), ataqueFurtivo(),voltereta()
caballero: carga(), intimidar (),fortalecer()

*/

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

class Persona {
    protected: 
        string nombre;
        int edad;

    public: 
        Persona(string _nombre, int _edad) {
            nombre = _nombre;
            edad = _edad;
        }

        string getNombre() {
            return nombre;
        }
        int getEdad() {
            return edad;
        }

        void setNombre(string _nombre) {
            nombre = _nombre;
        }
        void setEdad(int _edad) {
            edad = _edad;
        }
};

class Trabajador {
    protected:
        string empresa;
    public:
        Trabajador(string _empresa): empresa(_empresa) {}

        void trabajar() {
            cout << "Trabajando en " << empresa << endl;
        }
};


class Adulto: public Persona, public Trabajador {
    private:
        string trabajo;
    
    public:
        Adulto(string _nombre, int _edad, string _empresa, string _trabajo) 
            : trabajo(_trabajo),
              Persona (_nombre, _edad),
              Trabajador(_empresa) {
                this->empresa = "empresilla";
        }

        string getTrabajo() {
            return trabajo;
        }
        void setTrabajo(string _trabajo) {
            trabajo = _trabajo;
        }

        void resolverProblemas() {
            cout << "Trabajador " << nombre << " como " << trabajo << " en " << empresa << endl;
        } 


};

/// @brief ///////////////////////

int main() {
    
    Persona persona("Peter", 50);

    cout << "El señor " << persona.getNombre() << " tiene " << persona.getEdad() << " años." << endl;

    persona.setEdad(26);

    cout << "El señor " << persona.getNombre() << " tiene " << persona.getEdad() << " años." << endl;

    Adulto luispa("LuisPa", 57, "Renfe", "Director");

    cout << "El adulto es: " << endl;
    luispa.resolverProblemas();

    return 0;
}

