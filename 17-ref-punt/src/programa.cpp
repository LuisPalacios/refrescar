// Programa para pruebas en C++
//
// Funcione con parámetros por: 
//
//  Referencia
//  Dirccción
//  Puntero
//

#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <string>
#include <utility>
#include <array>

using namespace std;

// Función espera que le pasen el valor.
void sumaPasoPorValor(int a, int b)
{
    cout << "Suma: " << a + b;
    // Aunque los modifique no cambiarán en el llamante
    a=20; 
    b=30;
    cout << " ... cambié valores a:"<<a<<", b:"<<b<<endl;
}

// Función espera que le pasen la referencia a las variables.
void sumaPasoPorReferencia(int &a, int &b)
{
    cout << "Suma: " << a + b;
    // Al modificarlo SI QUE ESTOY modificando el original
    a=20; 
    b=30;       
    cout << " ... cambié valores a:"<<a<<", b:"<<b<<endl;
}
 
// Función espera que le pasen el Puntero a las variables.
void sumaPasoPorPuntero(int *a, int *b)
{
    cout << "Suma: " << *a + *b;
    // Modifico el contenido de a y b. 
    *a=20; 
    *b=30;       
    cout << " ... cambié valores a:"<<*a<<", b:"<<*b<<endl;
}


// Entrada
int main()
{
    int a=0, b=0;

    // Configuro cout
    cout << setfill(' ');
    cout << setprecision(14);

    cout << "------------ PASO POR VALOR" << endl;
    a=2; 
    b=3;
    cout << "Declaración: void sumaPasoPorValor(int a, int b)" << endl;
    cout << "a="<<a<<", b="<<b<<endl;
    cout << "Llamada al método -> sumaPasoPorValor(a,b)"<<endl;
    sumaPasoPorValor(a,b);
    cout << "Valores post... a="<<a<<", b="<<b<<endl;
    cout << endl;

    cout << "------------ PASO POR REFERENCIA" << endl;
    a=2; 
    b=3;
    cout << "Declaración: void sumaPasoPorReferencia(int &a, int &b)" << endl;
    cout << "a="<<a<<", b="<<b<<endl;
    cout << "Llamada al método -> sumaPasoPorReferencia(a,b)"<<endl;
    sumaPasoPorReferencia(a,b);
    cout << "Valores post... a="<<a<<", b="<<b<<endl;
    cout << endl;

    cout << "------------ PASO POR PUNTERO" << endl;
    a=2; 
    b=3;
    cout << "Declaración: void sumaPasoPorPuntero(int *a, int *b)" << endl;
    cout << "a="<<a<<", b="<<b<<endl;
    cout << "Llamada al método -> sumaPasoPorPuntero(&a,&b)"<<endl;
    sumaPasoPorPuntero(&a,&b);
    cout << "Valores post... a="<<a<<", b="<<b<<endl;
    cout << endl;

    return 0;
}
