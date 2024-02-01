/*

Programa en C++ para demostrar la herencia

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

