// Programa para pruebas en C++
//
// Escribe un ejemplo en C++ donde se pidan texto dos veces al usuario 
// desde la entrada estándar y entre ambas peticiones se limpie el buffer 
// de entrada estándar. 
//
// Pedir la primera entrada con fgets() y la segunda con getline() 
//


#include <iostream>
#include <cstdio> // Para fgets
#include <limits>
#include <string>

int main() {
    const int BUFFER_SIZE = 256;
    char primeraEntrada[BUFFER_SIZE];
    std::string segundaEntrada;

    // Pedir la primera entrada al usuario con fgets
    std::cout << "Introduce una cadena de texto: ";
    fgets(primeraEntrada, BUFFER_SIZE, stdin);

    // Limpiar el búfer de entrada
    // std::cin.clear();
    // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Limpiar el búfer de entrada después de fgets
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { /* descartar caracteres */ }

    // Pedir la segunda entrada al usuario con getline
    std::cout << "Ahora introduce otra cadena de texto: ";
    std::getline(std::cin, segundaEntrada);

    // Mostrar las entradas
    std::cout << "Primera cadena introducida: " << primeraEntrada << std::endl;
    std::cout << "Segunda cadena introducida: " << segundaEntrada << std::endl;

    return 0;
}