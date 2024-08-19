// Programa para pruebas en C++
//
// Calcular los primeros 15 valores de  la secuencia Fibonacci
//
// En matemáticas la sucesión de Fibonacci se trata de una serie infinita 
// de números naturales que empieza con un 0 y un 1 y continúa añadiendo 
// números que son la suma de los dos anteriores:
//
//      0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
//

#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <string>
#include <utility>
#include <array>

using namespace std;

// Función recursiva
// nValores: número de valores a calcular.
// anterior1: valor del penúltimo
// anterior2: valor del último
void fibonacci(int nValores, long anterior1, long anterior2)
{
    static int iteraciones=-1;

    // Si me pasan una tontería me piro    
    if (nValores<=0) return;

    // Si es la primera iteración inicializo
    if (iteraciones==-1) {
        iteraciones=nValores;
        cout << "0, 1";

    // Si hemos terminado de iterar me piro
    } else if (iteraciones--==0) {
        return;
    // Al lio
    } else {

        cout << ", " << anterior2;
    }
    fibonacci(nValores, anterior2, anterior1+anterior2);
}

// Entrada
int main()
{
    // Variables
    int nValores = 15;

    // Configuro cout
    cout << setfill(' ');
    cout << setprecision(14);
    cout << "--" << endl;

    cout << "Número de valores: ";
    cin >> nValores;
    cout << endl;
    if (nValores < 0)
    {
        cout << "No puedo calcular un número negativo de valores" << endl;
    }
    else
    {
//        cout << "Fibonacci de " << nValores << " valores = " << fibonacci(nValores, 0, 1) << endl;
        fibonacci(nValores, 0, 1);
        cout << endl;
    }

    return 0;
}
