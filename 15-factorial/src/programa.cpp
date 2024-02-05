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

long factorial(long num)
{
    long ret = 1;
    if (num > 0)
        ret = (num * factorial(num - 1));
    return ret;
}

// Entrada
int main()
{
    // Variables
    long num = 0;

    // Configuro cout
    cout << setfill(' ');
    cout << setprecision(14);
    cout << "--" << endl;

    cout << "Número sobre el cual calcularé su factorial: ";
    cin >> num;
    cout << endl;
    if (num < 0)
    {
        cout << "No puede ser negativo, la función factorial se define sobre el conjunto de los números naturales" << endl;
    }
    else
    {
        cout << "Factorial de " << num << "! = " << factorial(num) << endl;
        cout << endl;
    }

    return 0;
}
