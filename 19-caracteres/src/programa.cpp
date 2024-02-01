// Programa para pruebas en C++
//

// Pedir dos veces al usuario un texto y mostrarlo. Usando la entrada
// estándar. Entre ambas peticiones limpiar el buffer de entrada estándar. 
//


#include <iostream>
#include <cstdio> // Para fgets
#include <limits>
#include <string>

int main() {

    const int BUFFER_SIZE = 20;
    char primeraEntrada[BUFFER_SIZE];
    std::string segundaEntrada;

    // USO INCOHERENTE DE C y C++. En este ejemplo mezclo fgets() de C y 
    // getline() de C++. Para demostrar que se produce una situación incoherente, 
    // debído a cómo gestionan ambas el stdin, provoca que tenga que pulsar
    // dos veces INTRO tras el primer fgets()

    // Pido la primera entrada al usuario con fgets
    std::cout << "OP1 Introduce una cadena de texto: ";
    fgets(primeraEntrada, BUFFER_SIZE, stdin);

    // // Limpiar el búfer de entrada después de fgets
    // int c;
    // while ((c = getchar()) != '\n' && c != EOF) { /* descartar caracteres */ }

    // Limpiar el búfer de entrada
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Pedir la segunda entrada al usuario con getline
    std::cout << "OP1 Ahora introduce otra cadena de texto: ";
    std::getline(std::cin, segundaEntrada);

    // Mostrar las entradas
    std::cout << "OP1 Primera cadena introducida: " << primeraEntrada << std::endl;
    std::cout << "OP1 Segunda cadena introducida: " << segundaEntrada << std::endl;


    std::string priEntrada;
    std::string segEntrada;

    // Pedir la primera entrada al usuario
    std::cout << "OP2 Introduce una cadena de texto: ";
    std::getline(std::cin, priEntrada);

    // Limpiar el búfer de entrada YA NO ES NECESARIO
    // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Pedir la segunda entrada al usuario
    std::cout << "OP2 Ahora introduce otra cadena de texto: ";
    std::getline(std::cin, segEntrada);

    // Mostrar las entradas
    std::cout << "OP2 Primera cadena introducida: " << priEntrada << std::endl;
    std::cout << "OP2 Segunda cadena introducida: " << segEntrada << std::endl;

    return 0;
}

