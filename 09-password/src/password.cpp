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
    string user="";
    string pass1="";
    string pass2="";
    
    // Configuro cout para fixed y 14 dígitos
    cout << setfill(' ');
    cout << setprecision(10);
    cout<< "--" <<endl;
  
    cout << "Usuario : ";
    cin >> user;
    do {
        cout << "Pass 1: ";
        cin >> pass1;
        cout << "Pass 2: ";
        cin >> pass2;
        if (pass1 == pass2)
            std::cout << "Las contraseñas son iguales" << std::endl;
        else
            std::cout << "Las contraseñas son distintas" << std::endl;

    } while ( pass1.compare(pass2));

    return 0;
}