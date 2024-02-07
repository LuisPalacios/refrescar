// Programa para pruebas en C++
//

// Arrays dinámicos

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

#define SIZE_VECTOR 10
#define SIZE_VECTOR_REALLOC 15

struct Persona {
  string nombre;
  string apellido;
  string direccion;
  int edad;
};

void muestraPersona(Persona per) {

  cout << "Nombre: " << per.nombre << endl;
  cout << "Apellido: " << per.apellido << endl;
  cout << "Dirección: " << per.direccion << endl;
  cout << "Edad: " << per.edad << endl;
}

int main() {
  // Di algo majo
  cout << endl << "--" << endl;

  Persona p;
  p.nombre = "Luis";
  p.apellido = "Pa";
  p.direccion = "Casa";
  p.edad = 35;
  muestraPersona(p);

  cout << "--" << endl;

  Persona p2 = {"Juan", "Pa", "SuCasa", 34};
  muestraPersona(p2);

  cout << "--" << endl;
  cout << "Done!" << endl;

  return 0;
}
