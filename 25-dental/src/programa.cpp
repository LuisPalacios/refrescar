// Programa para pruebas en C++
//

/*
    Ejemplo de listas Etáticas: Caso de uso -> Clínica dental

    Crear una lista para agendar pacientes en una clínica dental.
    La clínica atiende a 20 personas por día, que le lleva entre 20 y 30 min por persona.
    La agenda debe almacenar: nombre, edad, sexo, fecha y hora de la consulta, coste, servicios entregados
    La agenda consider los siguientes tratamientos:
    Limpieza: 50€
    Caries: 40€
    Extracción de muela: 80€
    Blanqueamiento: 100€

*/

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

#define SIZE_VECTOR 10
#define SIZE_VECTOR_REALLOC 15

#define SRV_LIMPIEZA 0
#define SRV_CARIES 1
#define SRV_MUELA 2
#define SRV_BLANQUEAMIENTO 3

typedef struct Persona
{
  string nombre;
  int edad;
  char sexo; // V, M
  string fecha;
  string hora;
  bool servicios[4];
  int coste;
} persona;

void muestraPersona(persona p)
{
  p.coste = (p.servicios[SRV_LIMPIEZA] == true ? 50 : 0) +
              (p.servicios[SRV_CARIES] == true ? 40 : 0) +
              (p.servicios[SRV_MUELA] == true ? 80 : 0) +
              (p.servicios[SRV_BLANQUEAMIENTO] == true ? 100 : 0);

  cout << "--" << endl;
  cout << "Nombre       : " << p.nombre << endl;
  cout << "Edad         : " << p.edad << endl;
  cout << "Sexo         : " << p.sexo << endl;
  cout << "Fecha        : " << p.fecha << endl;
  cout << "Hora         : " << p.hora << endl;
  cout << "Srv Limpieza : " << (p.servicios[SRV_LIMPIEZA] == true ? "Sí" : "No") << endl;
  cout << "Srv Caries   : " << (p.servicios[SRV_CARIES] == true ? "Sí" : "No") << endl;
  cout << "Srv Muela    : " << (p.servicios[SRV_MUELA] == true ? "Sí" : "No") << endl;
  cout << "Srv Blanqueo : " << (p.servicios[SRV_BLANQUEAMIENTO] == true ? "Sí" : "No") << endl;
  cout << "Coste        : " << p.coste << endl;
  cout << "--" << endl;
}

int main()
{
  // Di algo majo
  cout << endl
       << "--" << endl;

  persona personas[10];

  cout << "Introduce los datos de la persona a agendar. " << endl;

  for (int i = 0; i < 10; i++)
  {
    cout << "Nombre: ";
    cin >> personas[i].nombre;
    cout << "Edad: ";
    cin >> personas[i].edad;
    cout << "Sexo: ";
    cin >> personas[i].sexo;
    cout << "Fecha: ";
    cin >> personas[i].fecha;
    cout << "Hora: ";
    cin >> personas[i].hora;
    cout << "Srv Limpieza: ";
    cin >> personas[i].servicios[SRV_LIMPIEZA];
    cout << "Srv Caries: ";
    cin >> personas[i].servicios[SRV_CARIES];
    cout << "Srv Muela: ";
    cin >> personas[i].servicios[SRV_MUELA];
    cout << "Srv Blanqueo: ";
    cin >> personas[i].servicios[SRV_BLANQUEAMIENTO];

    muestraPersona(personas[i]);
  }

  // muestraPersona(personas[0]);

  cout << "--" << endl;
  cout << "Done!" << endl;

  return 0;
}
