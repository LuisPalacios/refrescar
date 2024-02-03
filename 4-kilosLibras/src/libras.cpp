// Programa para convertir de Kilos a Libras y de Libras a Metros
//
// 1kg = 2.205 Libras
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variables
    float kg=0.0, libras=0.0;
    float ratioKiloLibra=2.205;
    
    // Configuro cout para fixed y 14 dígitos
    cout << setfill(' ');
    cout << setprecision(4);
    cout<< "--" <<endl;
  
    cout << "Introduce la cantidad en Kg: ";
    cin >> kg;
    libras = kg * ratioKiloLibra;
    cout << "Resultado, " << kg << " kg son " << libras << " libras." << endl;

    cout<< "--" <<endl;
    cout << "Introduce la cantidad en Libras: ";
    cin >> libras;
    kg = libras / ratioKiloLibra;

    cout << "Resultado, " << libras << " libras son " << kg << " kg." << endl;

    cout<< "--" <<endl;
    //cout << "Valores:" << endl << "Kg: " << kg << endl << "Libras: " << libras << endl;
    
    return 0;
}