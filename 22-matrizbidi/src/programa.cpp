// Programa para pruebas en C++
//

// Crear una matriz bidimensional con los 100 primeros números naturales,
// luego crear una con números naturales predefinidos.

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Crear una matriz bidimensional con los 100 primeros números naturales
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

// Mostrar la matriz
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
      // Di algo majo
      cout << std::setfill('0');
      cout << std::setw(3);
      cout << "--" << endl;

      // Matriz bidimensional con los 100 primeros números naturales
      int matrizSinInicializar[10][10];
      // Inicializo y muestro
      // iniMatrix(matrizSinInicializar);
      showMatrix(matrizSinInicializar);
      cout << endl;

      // Matriz bidimensional con los 100 primeros números naturales predefinicidos
      int matrizNumerosPredefinidos[10][10] = {
          {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
          {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
          {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
          {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
          {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
          {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
          {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
          {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
          {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
          {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}};
          
      // Inicializo y muestro
      // iniMatrix(matrizNumerosPredefinidos);
      showMatrix(matrizNumerosPredefinidos);
      cout << endl;

      cout << "Done!" << endl;

      return 0;
}
