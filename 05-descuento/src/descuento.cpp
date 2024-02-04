// Programa para pruebas en C++
//
// Un cliente compra 3 productos con descuento, dado el precio y su descuento, calcular el total a pagar
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variables
    int numProductos=3;
    float precioProducto=0.0;
    float descuento=0.0;
    float total=0.0;
    
    // Configuro cout para fixed y 14 dígitos
    cout << setfill(' ');
    cout << setprecision(4);
    cout<< "--" <<endl;
  
    cout << "Introduce el número de productos : ";
    cin >> numProductos;
    cout << "Introduce el precio por producto : ";
    cin >> precioProducto;
    cout << "Introduce el descuento (0.0 a 1) : ";
    cin >> descuento;


    cout<< "--" <<endl;

    total = (numProductos * precioProducto) * (1-descuento);

    cout << "Total a pagar: " << total << endl;
    
    return 0;
}