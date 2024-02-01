#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double num1=2.213847091823746987;
    double num2=4.298374987;
    
    // Configuro cout para fixed y 14 dígitos
    cout << setfill(' ');
    cout << setprecision(14);
    cout<< "--" <<endl;
    cout<< "núm1: " << setw(30) << num1 << endl;
    cout<< "núm2: " << setw(30) << num2 << endl;

    // + - * / %
    int a=13, b=5, suma=0, resta=0, mult=0, div=0, mod=0, amp=0;
    float fDiv=0.0;

    suma=a+b;
    resta=a-b;
    mult=a*b;
    div=a/b;
    fDiv=a/(float)b;
    mod=a%b;

    cout << "a=" << a << " b=" << b << endl;
    cout << "a+b=" << suma << endl;
    cout << "a-b=" << resta << endl;
    cout << "a*b=" << mult << endl;
    cout << "a/b=" << div << endl;
    cout << "a/b (float)=" << fDiv << endl;
    cout << "a%b=" << mod << endl;

    cout << "--\n";
    int km=0, combustible=0;
    float euroPorLitro=880;

    cout << setprecision(3);
    cout << "Coste de cada litro: " << euroPorLitro << endl;
    cout << "Km recorridos por un automovil: ";
    cin >> km;
    cout << "Combustible consumido: ";
    cin >> combustible;
    cout << "Combustible/km=" << combustible/(float)km << endl;
    cout << "Coste/km=" << (combustible/(float)km)*(float)euroPorLitro << endl;
    cout << "Combustible/100km=" << (combustible*100)/(float)km << endl;
    cout << "Coste/100km=" << ((combustible*100)/(float)km)*(float)euroPorLitro << endl;
    
    return 0;
}