// Programa para pruebas en C++
//

// Arrays dinámicos

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

#define SIZE_VECTOR 10
#define SIZE_VECTOR_REALLOC 15

void muestraVector(int arr[SIZE_VECTOR], int size)
{
      for (int i = 0; i < size; i++)
      {
            cout << arr[i] << " ";
      }
      cout << endl;
}

int main()
{
      // Di algo majo
      cout << endl
           << "--" << endl;

      // ESTÁTICO
      int numMemStatic[SIZE_VECTOR] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
      cout << "ESTATICO int[]: " << endl;
      muestraVector(numMemStatic, SIZE_VECTOR);

      // DINAMICO new / delete
      cout << "DINÁMICO con new: " << endl;
      int *numMemDynamic = new int[SIZE_VECTOR];
      printf("Dirección numMemDynamic: %p\n", (void*)numMemDynamic);
      numMemDynamic[3] = 4;
      *(numMemDynamic) = 1;
      *(numMemDynamic + 1) = 2;
      muestraVector(numMemDynamic, SIZE_VECTOR);
      //delete[] numMemDynamic; // LIBERO EL ESPACIO !!

      // AMPLIABLE DINAMICO  malloc/free (necesita <cstdlib>)
      cout << "DINÁMICO con malloc(): " << endl;
      int *numMemMalloc = (int *)malloc(sizeof(int) * (SIZE_VECTOR)); // <--- este es liberable
      printf("Dirección numMemMalloc: %p\n", (void*)numMemMalloc);
      numMemMalloc[3] = 14;
      *(numMemMalloc) = 11;
      *(numMemMalloc + 1) = 12;
      muestraVector(numMemMalloc, SIZE_VECTOR);

      // AMPLIABLE DINAMICO  realloc (necesita <cstdlib>)
      cout << "DINÁMICO con realloc(): " << endl;
      int *numMemRealloc = (int *)realloc(numMemMalloc, sizeof(int) * SIZE_VECTOR_REALLOC);
      printf("Dirección numMemMalloc: %p\n", (void*)numMemRealloc);
      if (numMemRealloc != nullptr)
      {
            //Nota: realloc hace un free automáticamente de numMemMalloc
            numMemMalloc = numMemRealloc;
      }
      numMemMalloc[3] = 24;
      *(numMemMalloc) = 11;
      *(numMemMalloc + 13) = 14;
      *(numMemMalloc + 14) = 15;
      muestraVector(numMemMalloc, SIZE_VECTOR_REALLOC);

      //      printf("Valor del puntero numMemMalloc: %08x", )
      printf("Dirección numMemStatic: %p\n", (void*)&numMemStatic);
      printf("Dirección numMemDynamic: %p\n", (void*)numMemDynamic);
      printf("Dirección numMemMalloc: %p\n", (void*)numMemMalloc);
      printf("Dirección numMemRealloc: %p\n", (void*)numMemRealloc);


      delete[] numMemDynamic; // LIBERO EL ESPACIO !!
      free(numMemMalloc); // LIBERO EL ESPACIO !!

      cout << "--" << endl;
      cout << "Done!" << endl;

      return 0;
}
