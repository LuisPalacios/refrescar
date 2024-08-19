/*

Programa en C++ para empezar con clases y objetos

*/

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

class Persona
{
private:
    string nombre;
    int edad;

public:
    Persona(string _nombre, int _edad)
    {
        nombre = _nombre;
        edad = _edad;
    }

    string getNombre()
    {
        return nombre;
    }
    int getEdad()
    {
        return edad;
    }

    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }
    void setEdad(int _edad)
    {
        edad = _edad;
    }
};

class Rectangulo
{
private:
    int base;
    int altura;

public:
    Rectangulo(int _base, int _altura)
    {
        base = _base;
        altura = _altura;
    }

    int getBase()
    {
        return base;
    }
    int getAltura()
    {
        return altura;
    }

    void setBase(int _base)
    {
        base = _base;
    }
    void setAltura(int _altura)
    {
        altura = _altura;
    }

    int area()
    {
        return base * altura;
    }

    std::string toString()
    {
        return "Rectángulo [base=" + std::to_string(base) + ", altura=" + std::to_string(altura) + "]";
    }
};

/// @brief ///////////////////////

int main()
{

    Persona persona("LuisPa", 57);
    cout << "El señor " << persona.getNombre() << " tiene " << persona.getEdad() << " años." << endl;
    persona.setEdad(26);
    cout << "El señor " << persona.getNombre() << " tiene " << persona.getEdad() << " años." << endl;

    Rectangulo rectangulo(20, 10);
    cout << "Rectángulo de " << rectangulo.getBase() << "x" << rectangulo.getAltura() << " tiene un área de: " << rectangulo.area() << endl;

    Rectangulo rect(5, 10);
    std::string rectString = rect.toString();
    std::cout << rectString << std::endl;

    return 0;
}
