// Programa para pruebas en C++
//
// Cuanto dinero ofrece una rentabilidad anual del 9%
//

#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <string>
#include <utility>

using namespace std;

int main()
{
    // Variables
    float dolar=0.0, euro=0.0, peseta=0.0;
    int sel=-1;
    float europts=166.386;
    std::string line;
    std::string sDinero;
    int dinero;
    
    // Configuro cout
    cout << setfill(' ');
    cout << setprecision(14);
    cout<< "--" <<endl;

    // Pregunto el tipo de conversión
    do {
        cout << "Tipo de conversión:\n";
        cout << "1) Dolar a Euro.\n";
        cout << "2) Euro a dolar.\n";
        cout << "3) Pesetas a Euros.\n";
        cout << "4) Euros a pesetas.\n";
        cout << "0) Salir.\n";    
        cout<< "--" <<endl;
        cout<< "Selecciona un tipo de cambio: ";
        std::getline(std::cin, line);

        // A pedir la línea
        sel=-1;
        try
        {
            sel=stoi(line);
            if (sel<0 || sel>4) sel=-1;
        }
        catch (std::invalid_argument const& ex)
        {
            std::cout << "std::invalid_argument::what(): " << ex.what() << '\n';
        }
        catch (std::out_of_range const& ex)
        {
            std::cout << "std::out_of_range::what(): " << ex.what() << '\n';
        }

    } while ( sel==-1 );  

    // Convierto según el tipo
    if ( sel > 0 ) {
        cout<< "Introduce cantidad: ";
        std::getline(std::cin, sDinero);
        try
        {
            dinero=stoi(sDinero);
            switch (sel) {
                case 1:
                    cout << "Dolares : $" << dinero << " = " << dinero*0.91 << "€" << endl;
                    break;
                case 2:
                    cout << "Euro    : " << dinero << "€ = $" << dinero*(1/0.91) << endl;
                    break;
                case 3:
                    cout << "Pesetas : " << dinero << " pts = " << ((float)dinero)/europts << "€" << endl;
                    break;
                case 4:
                    cout << "Euros : " << dinero << "€ = " << ((float)dinero)*europts << " pts" << endl;
                    break;
                default:
                    break;
            }
            
        }
        catch (std::invalid_argument const& ex)
        {
            std::cout << "std::invalid_argument::what(): " << ex.what() << '\n';
        }
        catch (std::out_of_range const& ex)
        {
            std::cout << "std::out_of_range::what(): " << ex.what() << '\n';
        }        
    }
  
    return 0;
}