// Programa para pruebas en C++
//
// descubrir todos los números primos desde 0 hasta el número dado
//

#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <string>
#include <utility>

using namespace std;

bool esPrimo(const int num);


int main()
{
    // Variables
    int num=-1;
    std::string line;
    
    // Configuro cout
    cout << setfill(' ');
    cout << setprecision(14);
    cout<< "--" <<endl;

    // Pregunto el tipo de conversión
    do {
        cout << "Número: ";
        std::getline(std::cin, line);

        // A pedir la línea
        num=-1;
        try
        {
            num=stoi(line);
            if (num<0) num=-1;
        }
        catch (std::invalid_argument const& ex)
        {
            std::cout << "std::invalid_argument::what(): " << ex.what() << '\n';
        }
        catch (std::out_of_range const& ex)
        {
            std::cout << "std::out_of_range::what(): " << ex.what() << '\n';
        }

    } while ( num==-1 );  

    // Busco todos los primos entre los facilitados
    // Me salto el 0 que no es primo ni el 1 que tampoco lo es (solo tiene un divisor)
    if ( num>=0 ) {
        for ( int i=2; i<=num; i++ ) {
            if ( esPrimo(i) == true ) {
                if ( i>2 ) cout << ", ";
                cout << i;
            }
        }
    }
    cout << endl;
    return 0;
}


bool esPrimo(const int num) {
    for ( int i=2; i<num; i++ ) {
        if ( num%i == 0 ) {
            return false;
        }
    }
    return true;
}

