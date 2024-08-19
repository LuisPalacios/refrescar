// Programa para pruebas en C++
//
// Cuanto dinero ofrece una rentabilidad anual del 9%
//

#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    // Variables
    int num=0, num2=0;
    int suma=0;
    
    // Configuro cout para fixed y 14 dígitos
    cout << setfill(' ');
    cout << setprecision(10);
    cout<< "--" <<endl;

    cout << "Valor desde: ";
    cin >> num;
    cout << "Valor hasta: ";
    cin >> num2;
  
    cout<< "-- Inicio" <<endl;
    cout << "num: " << num << endl;
    for (; num<=num2; num++) {
        suma+=num;
        cout << "num: " << num << " suma: " << suma << endl;
    }
  
  
    return 0;
}