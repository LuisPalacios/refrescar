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
} x = { "Peter", "Black" }, y = { "John", "Le Carre", "Francia", 23 }; // Habil
  
typedef struct People
{
  /* data */
  string name;
  string lastname;
  string address;
  int age;
} person;


void muestraPersona(Persona per) {
  cout << "--" << endl;
  cout << "Nombre: " << per.nombre << endl;
  cout << "Apellido: " << per.apellido << endl;
  cout << "Dirección: " << per.direccion << endl;
  cout << "Edad: " << per.edad << endl;
  cout << "--" << endl;
}

void showPerson(person pe) {
  cout << "--" << endl;
  cout << "Name: " << pe.name << endl;
  cout << "Last: " << pe.lastname << endl;
  cout << "Addr: " << pe.address << endl;
  cout << "Age : " << pe.age << endl;
  cout << "--" << endl;
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


  Persona p2 = {"Juan", "Pa", "SuCasa", 34};
  muestraPersona(p2);
  muestraPersona(x);
  muestraPersona(y);


  person persona1={"Paul", "Mac", "London"};
  showPerson(persona1);

  cout << "--" << endl;
  cout << "Done!" << endl;

    



  return 0;
}
