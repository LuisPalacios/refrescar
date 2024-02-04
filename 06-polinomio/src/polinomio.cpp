// Programa para pruebas en C++
//
// Resolver el siguiente polinomio
//
//    5 * x^3 + 7 * x^2 + 3 * x + 9
//

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    // Variables
    double x=0.0;
    double total=0.0;
    
    // Configuro cout para fixed y 14 dígitos
    cout << setfill(' ');
    cout << setprecision(4);
    cout<< "--" <<endl;
  
    cout << "Introduce el valor de x: ";
    cin >> x;

    cout<< "--" <<endl;

    total = ((double)5 * pow(x, (double)3)) +  ((double)7 * pow(x, (double)2)) + ((double)3 * x) + (double) 9;

    cout << "Total: " << total << endl;
    
    return 0;
}