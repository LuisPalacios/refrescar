/*

Programa en C++ para empezar con clases y objetos

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

/// @brief ///////////////////////

int main() {
    
    Persona persona("LuisPa", 57);

    cout << "El señor " << persona.getNombre() << " tiene " << persona.getEdad() << " años." << endl;

    persona.setEdad(26);

    cout << "El señor " << persona.getNombre() << " tiene " << persona.getEdad() << " años." << endl;

    return 0;
}

