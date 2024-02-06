// Programa para pruebas en C++
//

// Crear una matriz bidimensional con los 100 primeros números

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void iniMatrix(int m[10][10])
{
      int x = 0, y = 0;
      do
      {
            do
            {
                  m[x][y] = ((x * 10) + y) + 1;
            } while (++y < 10);
            y = 0;
      } while (++x < 10);
}

void showMatrix(int m[10][10])
{
      int x = 0, y = 0;
      do
      {
            do
            {
                  cout << "[" << x << "][" << y << "]=" << std::setfill('0') << std::setw(3) << m[x][y] << " ";
            } while (++y < 10);
            y = 0;
            cout << endl;
      } while (++x < 10);
}

int main()
{

      // Defino la matriz bidimensional
      int matriz[10][10];
      int i = 1;

      cout << std::setfill('0');
      cout << std::setw(3);
      // cout << setprecision(4);
      cout << "--" << endl;

      iniMatrix(matriz);
      showMatrix(matriz);

      cout << endl
           << "Done!" << endl;

      return 0;
}
