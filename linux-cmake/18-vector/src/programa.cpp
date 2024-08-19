// Programa para pruebas en C++
//
// Varios con vectores

#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <string>
#include <utility>
#include <array>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

#define VECTORSIZE 100

// C - ARRAY_SIZE(arr) devuelve el tamaño de un array
#define ARRAY_SIZE(x) (sizeof((x)) / sizeof((x)[0]))

// C++ - array_size(arr) devuelve el tamaño de un array
// Paso T como referencia T(&)
// Al poner [n] estoy pidiendo al compilador que calcule 'n' en tiempo de compilación
template<class T, size_t n>
size_t array_size( T(&)[n]) {
    return n;
}

// Iniciar vectores. 
// Nota: Cuando pasas un array como argumento a una función en C++, 
// en realidad estás pasándolo por referencia, aunque a menudo puede 
// parecer que se pasa por valor debido a la sintaxis. No se pasa
// el array completo, sino un puntero al primer elemento del array.
// Se conoce como "decaimiento de array" (array decay). Por ejemplo, 
// si tienes un array int arr[10]; y lo pasas a una función func(arr);,
// dentro de func, arr se trata como un puntero int*, no como un array int[10].
// Esto permite modificar el contenido del array dentro del método
void iniciarVector(int arr[VECTORSIZE]) {
    for (int i=0; i<VECTORSIZE; i++ ) {
        arr[i]=1+rand()%(VECTORSIZE);
    }    
}
// Mostrar el contenido de un array
void mostrarVector(int arr[VECTORSIZE]) {
    for (int i=0; i<VECTORSIZE; i++ ) {
        cout << arr[i] << " ";
    }    
}
 

// Devolver el menor elemento de un array
int menorDeVector(int arr[VECTORSIZE]) {
    int menor=0;
    for (int i=0; i<VECTORSIZE; i++ ) {
        if ( arr[i] < menor ) menor = arr[i];
    }   
    return menor; 
}
// Devolver el mayor elemento de un array
int mayorDeVector(int arr[VECTORSIZE]) {
    int mayor=0;
    for (int i=0; i<VECTORSIZE; i++ ) {
        if ( arr[i] > mayor ) mayor = arr[i];
    }    
    return mayor; 
}



// Mostrar un array de strings
void muestraNombres(string arr[], int size) {

    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }

}
// Buscar qué posición tiene un string dentro de un array de strings
// Devuelve -1 si no lo ha encontrado
int buscaNombre(string search, string arr[], int size) {
    for (int i=0; i<size; i++) {
        if ( !search.compare(arr[i]) ) return i+1;
    }
    return -1;
}



// Entrada
int main()
{

    // Configuro cout
    cout << setfill(' ');
    cout << setprecision(14);

    // Inicializar random
    srand(time(NULL));

    // EJERCICIO 1
    // *******************
    // Crear un vector de 10 números predefinidos, mostrar el elmento en posición X 
    // Adicionalmente buscar el elemento en pos Y

    int vectorSize[10]={1,2,3,4,5};
    int vectorNoSize[]={6,5,4,3,2,1,0,9,};

    cout << endl << endl << "=====" << endl;
    for (int i=0; i<ARRAY_SIZE(vectorSize); i++) {
        cout << vectorSize[i] << " ";
    }
    cout << endl << "--" << endl;
    
    for (int i=0; i<array_size(vectorSize); i++) {
        cout << vectorSize[i] << " ";
    }
    cout << endl << "--" << endl;
    for (int i=0; i<ARRAY_SIZE(vectorNoSize); i++) {
        cout << vectorNoSize[i] << " ";
    }
    cout << endl << "--" << endl;
    
    for (int i=0; i<array_size(vectorNoSize); i++) {
        cout << vectorNoSize[i] << " ";
    }
    
    cout << endl << endl << "=====" << endl;

    // EJERCICIO 2
    // *******************
    // Crear un vector de 100 elementos random y mostrarlos por consola
    // rand() genera un número random entre 0 y RAND_MAX (garantizado 32767)
    int vectorRandom[VECTORSIZE]; 
    for (int i=0; i<VECTORSIZE; i++ ) {
        vectorRandom[i]=1+rand()%(VECTORSIZE);
    }    

    cout << endl << "-- RAND_MASX " << RAND_MAX << endl;
    cout << endl << "--" << endl;
    for (int i=0; i<VECTORSIZE; i++) {
        cout << vectorRandom[i] << " ";
    }

    cout << endl << endl << "=====" << endl;


    // EJERCICIO 3
    // *******************
    // Sumar un vector A y un vector B y dejar el resultado en el array C
    srand(time(NULL));

    int vectorA[VECTORSIZE], vectorB[VECTORSIZE], vectorC[VECTORSIZE]; 

    iniciarVector(vectorA);
    iniciarVector(vectorB);
    iniciarVector(vectorC);

    cout << endl << "-- vectorA" << endl;
    mostrarVector(vectorA);
    cout << endl << "-- vector B" << endl;
    mostrarVector(vectorB);
    cout << endl << "-- vector C" << endl;
    mostrarVector(vectorC);
    cout << endl << "--" << endl;

    // Cambio C
    // Sumo A + B y dejo el resultado en C
    for (int i=0; i<VECTORSIZE; i++ ) {
        vectorC[i] = vectorA[i]+vectorB[i];
    }    
    cout << endl << "-- vector C" << endl;
    mostrarVector(vectorC);
    cout << endl << endl << "=====" << endl;



    // EJERCICIO 4
    // *******************
    // Buscar el menor y mayor elemento de un array
    
    cout << endl << "-- vectorA menor: " << menorDeVector(vectorA) << ", mayor: " << mayorDeVector(vectorA) << endl;
    cout << endl << "-- vectorB menor: " << menorDeVector(vectorB) << ", mayor: " << mayorDeVector(vectorB) << endl;
    cout << endl << "-- vectorC menor: " << menorDeVector(vectorC) << ", mayor: " << mayorDeVector(vectorC) << endl;
    cout << endl << "=====" << endl;


    // EJERCICIO 5
    // *******************
    // Buscar string en array de strings
    string nombres[]={"luis", "juan", "pedro", "ana", "almudena"};
    cout << endl << "===== MUESTRA NOMBRES" << endl;
    muestraNombres(nombres, array_size(nombres));
    cout << endl << "===== Busca pepe: " << buscaNombre("pepe", nombres, array_size(nombres)) << endl;
    cout << "===== Busca juan: " << buscaNombre("pedro", nombres, array_size(nombres)) << endl;

    cout << endl << "===== !!" << endl;

    // for (int i : vectorSized ) {
    //     cout<<"v["<<i<<"]="<<vectorSized[i]<<endl;
    // }

    return 0;
}
