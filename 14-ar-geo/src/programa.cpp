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

// Entrada
int main()
{
    // Variables
    int ini=0, dif=0, cant=0; 
    
    // Configuro cout
    cout << setfill(' ');
    cout << setprecision(14);
    cout << "--" << endl;

    cout << "Valor inicial: ";
    cin >> ini;
    cout << "Diferencia: ";
    cin >> dif;
    cout << "Cantidad: ";
    cin >> cant;
    
    cout << endl;
    cout << "ARITMÉTICA: ";
    for ( int i=0; i<cant; i++ ){
        cout << (ini + (dif * i));
        if ( i<(cant-1) ) cout << ", ";
    }
    cout << endl;

    cout << "GEOMÉTRICA: ";
    for ( int i=0; i<cant; i++ ){
        cout << (ini * pow(dif, i));
        if ( i<(cant-1) ) cout << ", ";
    }
    cout << endl;

    return 0;
}
