// Programa para pruebas en C++
//
// Calcula hipotenusa de un rectángulo sabiendo sus lados a y b
//
//  h = sqrt ( a^2 + b^2 )
//

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    // Variables
    double a=0.0, b=0.0, h=0.0;
    
    // Configuro cout para fixed y 14 dígitos
    cout << setfill(' ');
    cout << setprecision(4);
    cout<< "--" <<endl;
  
    cout << "Introduce el valor de a: ";
    cin >> a;
    cout << "Introduce el valor de b: ";
    cin >> b;

    cout<< "--" <<endl;

    h = sqrt ( pow ( a, (double) 2) + pow ( b, (double) 2 ) );

    cout << "Total: " << h << endl;
    
    return 0;
}