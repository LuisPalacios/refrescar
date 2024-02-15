/*

Programa en C++ para demostrar la herencia

*/

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

class Persona {
    private: 
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

class Adulto: public Persona {
    private:
        string trabajo;
    
    public:
        Adulto(string _nombre, int _edad) {
            super(_nombre, _edad);
        }

        string getTrabajo() {
            return trabajo;
        }
        void setTrabajo(string _trabajo) {
            trabajo = _trabajo;
        }

};

/// @brief ///////////////////////

int main() {
    
    Persona persona("Peter", 50);

    cout << "El señor " << persona.getNombre() << " tiene " << persona.getEdad() << " años." << endl;

    persona.setEdad(26);

    cout << "El señor " << persona.getNombre() << " tiene " << persona.getEdad() << " años." << endl;

    Adulto ("LuisPa", 57);

    return 0;
}

