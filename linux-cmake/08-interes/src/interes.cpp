// Programa para pruebas en C++
//
// Cuanto dinero ofrece una rentabilidad anual del 9%
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variables
    float inversion=0.0;
    int years=0, i=0;
    float rentabilidad=0.09;
    
    // Configuro cout para fixed y 14 dígitos
    cout << setfill(' ');
    cout << setprecision(10);
    cout<< "--" <<endl;
  
    cout << "Introduce cantidad a invertir : ";
    cin >> inversion;
    cout << "Introduce años                : ";
    cin >> years;

    cout<< "--" <<endl;

    while ( i++ < years ) {
        inversion = inversion * (1+rentabilidad);
        cout << "Año " << i << " -> " << inversion << endl;
    }

    cout << "Saldo: " << (int) inversion << endl;
    
    return 0;
}