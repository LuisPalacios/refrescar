// Programa para pruebas en C++
//
// Crear un progresión Aritmética y Geométrica dando 
// - número inicial
// - la diferencia a aplicar en cada paso
// - número de elementos a mostrar
//

#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <string>
#include <utility>
#include <array>

using namespace std;


long factorial(long num) {
    long ret=1;
    if (num>0) ret = (num*factorial(num-1));
    return ret;
}


// Entrada
int main()
{
    // Variables
    long num=0; 
    
    // Configuro cout
    cout << setfill(' ');
    cout << setprecision(14);
    cout << "--" << endl;

    cout << "Número: ";
    cin >> num;
    cout << endl;

    cout << "FACTORIAL de " << num << ": " << factorial(num) << endl;


    return 0;
}
