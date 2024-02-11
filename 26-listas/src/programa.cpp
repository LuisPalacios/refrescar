/*

Programa en C++ que demuestre el uso de una lista con nodos doblemente enlazados usando punteros 
y new para crear o delete para borrar cada uno de los elementos. 

El elemento principal es la Lista. Utiliza un struct para la Lista que contendrá el número de 
nodos que contiene así como un puntero al primer Nodo.

El elemento que representa al Nodo: Utiliza un struct para cada Nodo, con nombre, apellido, 
edad y los punteros al elemento anterior y posterior. 

No utilizo clases. Solo estructuras. 

El programa debe mostrar un menú que permita las siguientes acciones: 

  agregarNodoAlFinal, 
  agregarNodoAlPrincipio, 
  eliminarNodoPorNombre, 
  eliminarNodoPorPosicion, 
  eliminarPrimerNodo, 
  eliminarUltimoNodo, 
  buscarNodoPorNombre (devolverá número de posición), 
  mostrarNúmeroNodos, 
  mostrarContenidoCompletoLista, 
  eliminarListaCompleta.

*/

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

struct Nodo {
    string nombre;
    string apellido;
    int edad;
    Nodo* anterior;
    Nodo* siguiente;
};

struct Lista {
    Nodo* cabeza;
    int numeroDeNodos;

    Lista() : cabeza(nullptr), numeroDeNodos(0) {}

    void agregarNodoAlFinal(string nombre, string apellido, int edad);
    void agregarNodoAlPrincipio(string nombre, string apellido, int edad);
    void eliminarNodoPorNombre(string nombre);
    void eliminarPrimerNodo();
    void eliminarUltimoNodo();
    int buscarNodoPorNombre(string nombre);
    void mostrarNumeroNodos();
    void mostrarContenidoCompletoLista();
    void eliminarListaCompleta();
    void rellenarListaConDatosAleatorios();
    void simularColasFIFO();
    void simularPilasLIFO();
};


// Implementación de funciones de Lista

// Agrega un nodo al final de la lista
void Lista::agregarNodoAlFinal(string nombre, string apellido, int edad) {
    Nodo* nuevo = new Nodo{nombre, apellido, edad, nullptr, nullptr};
    
    if (cabeza == nullptr) {
        cabeza = nuevo;
    } else {
        Nodo* temp = cabeza;
        while (temp->siguiente != nullptr) {
            temp = temp->siguiente;
        }
        temp->siguiente = nuevo;
        nuevo->anterior = temp;
    }
    numeroDeNodos++;
}

// Agrega un nodo al principio de la lista
void Lista::agregarNodoAlPrincipio(string nombre, string apellido, int edad) {
    Nodo* nuevo = new Nodo{nombre, apellido, edad, nullptr, nullptr};
    
    if (cabeza != nullptr) {
        cabeza->anterior = nuevo;
        nuevo->siguiente = cabeza;
    }
    cabeza = nuevo;
    numeroDeNodos++;
}

// Elimina el nodo cuyo nombre sea el que nos pasan.
void Lista::eliminarNodoPorNombre(string nombre) {
    if (cabeza == nullptr) return;

    Nodo* temp = cabeza;
    while (temp != nullptr && temp->nombre != nombre) {
        temp = temp->siguiente;
    }

    if (temp == nullptr) return;  // Nodo no encontrado

    if (temp->anterior != nullptr) {
        temp->anterior->siguiente = temp->siguiente;
    } else {
        cabeza = temp->siguiente;
    }

    if (temp->siguiente != nullptr) {
        temp->siguiente->anterior = temp->anterior;
    }

    delete temp;
    numeroDeNodos--;
}

// Eliminar el primer nodo de la lista
void Lista::eliminarPrimerNodo() {
    if (cabeza == nullptr) return;

    Nodo* temp = cabeza;
    cabeza = cabeza->siguiente;

    if (cabeza != nullptr) {
        cabeza->anterior = nullptr;
    }

    delete temp;
    numeroDeNodos--;
}

// Eliminar el último nodo de la lista
void Lista::eliminarUltimoNodo() {
    if (cabeza == nullptr) return;

    if (cabeza->siguiente == nullptr) {
        delete cabeza;
        cabeza = nullptr;
    } else {
        Nodo* temp = cabeza;
        while (temp->siguiente != nullptr) {
            temp = temp->siguiente;
        }

        temp->anterior->siguiente = nullptr;
        delete temp;
    }
    numeroDeNodos--;
}

// Buscar nodo por nombre
int Lista::buscarNodoPorNombre(string nombre) {
    if (cabeza == nullptr) {
        cout << "La lista está vacía." << endl;
        return -1;
    }

    Nodo* temp = cabeza;
    int posicion = 0;
    while (temp != nullptr) {
        if (temp->nombre == nombre) {
            cout << "Nodo encontrado en la posición " << posicion << ":" << endl;
            cout << "Nombre: " << temp->nombre << ", Apellido: " << temp->apellido << ", Edad: " << temp->edad << endl;
            return posicion;
        }
        temp = temp->siguiente;
        posicion++;
    }

    cout << "Nodo no encontrado." << endl;
    return -1;
}

// Mostrar el número de nódos
void Lista::mostrarNumeroNodos() {
    cout << "Número total de nodos en la lista: " << numeroDeNodos << endl;
}

// Mostrar todos los nodos
void Lista::mostrarContenidoCompletoLista() {
    if (cabeza == nullptr) {
        cout << "La lista está vacía." << endl;
        return;
    }

    Nodo* temp = cabeza;
    int contador = 0;
    cout << "----------------LISTA-------------------" << endl;
    while (temp != nullptr) {
        cout << contador << ": " << temp->nombre << " " << temp->apellido << " " << temp->edad << endl;
        temp = temp->siguiente;
        contador++;
    }
    cout << "----------------------------------------" << endl;
}

// Reinicializar la lista por completo.
void Lista::eliminarListaCompleta() {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* siguiente = actual->siguiente;
        delete actual;
        actual = siguiente;
    }
    cabeza = nullptr;
    numeroDeNodos = 0;
    cout << "La lista ha sido eliminada completamente." << endl;
}

// Rellenar la lista
void Lista::rellenarListaConDatosAleatorios() {
    string nombres[] = {"Carlos", "Juan", "Miguel", "Luis", "José", "Antonio", "Francisco", "David", "Manuel", "Jorge"};
    string apellidos[] = {"García", "Fernández", "González", "Rodríguez", "López", "Martínez", "Sánchez", "Pérez", "Martín", "Gómez"};

    srand(time(NULL)); // Inicializar el generador de números aleatorios

    for (int i = 0; i < 10; i++) {
        string nombreAleatorio = nombres[rand() % 10];
        string apellidoAleatorio = apellidos[rand() % 10];
        int edadAleatoria = rand() % 100; // Edad aleatoria entre 0 y 99

        agregarNodoAlFinal(nombreAleatorio, apellidoAleatorio, edadAleatoria);
    }
    cout << "Se han añadido 10 nodos con datos aleatorios !!." << endl;

}

// Cola: Es una lista que almacena la info en modo FIFO
// A continuación vemos un ejemplo de cómo usar mis Listas como Colas. 
void Lista::simularColasFIFO() {
    cout << "Añadiendo 20 nodos con datos aleatorios..." << endl;
    rellenarListaConDatosAleatorios(); // Primera tanda de 10 nodos
    rellenarListaConDatosAleatorios(); // Segunda tanda de 10 nodos

    mostrarContenidoCompletoLista();

    cout << "Procesando y eliminando nodos en orden FIFO..." << endl;
    while (cabeza != nullptr) {
        cout << "Eliminando nodo: ";
        cout << "Nombre: " << cabeza->nombre << ", Apellido: " << cabeza->apellido << ", Edad: " << cabeza->edad << endl;
        eliminarPrimerNodo();
    }
    cout << "Todos los nodos han sido procesados y eliminados." << endl;
    cout << "=========" << endl;
    mostrarContenidoCompletoLista();
    cout << "=========" << endl;
}

// Pila: Es una lista que almacena la info en modo LIFO
// A continuación vemos un ejemplo de cómo usar mis Listas como Pilas. 
void Lista::simularPilasLIFO() {
    cout << "Añadiendo 20 nodos con datos aleatorios..." << endl;
    rellenarListaConDatosAleatorios(); // Primera tanda de 10 nodos
    rellenarListaConDatosAleatorios(); // Segunda tanda de 10 nodos

    mostrarContenidoCompletoLista();

    cout << "Procesando y eliminando los últimos 20 nodos en orden LIFO..." << endl;
    int nodosAEliminar = 20;
    while (cabeza != nullptr && nodosAEliminar > 0) {
        Nodo* ultimoNodo = cabeza;
        while (ultimoNodo->siguiente != nullptr) {
            ultimoNodo = ultimoNodo->siguiente;
        }
        cout << "Eliminando nodo: ";
        cout << "Nombre: " << ultimoNodo->nombre << ", Apellido: " << ultimoNodo->apellido << ", Edad: " << ultimoNodo->edad << endl;
        eliminarUltimoNodo();
        nodosAEliminar--;
    }
    cout << "Los últimos 20 nodos han sido procesados y eliminados." << endl;
    cout << "=========" << endl;
    mostrarContenidoCompletoLista();
    cout << "=========" << endl;
}



int main() {
    Lista lista;
    int opcion;
    string nombre, apellido;
    int edad, posicion;

    do {
        cout << "1. Agregar nodo al final" << endl;
        cout << "2. Agregar nodo al principio" << endl;
        cout << "3. Eliminar nodo por nombre" << endl;
        cout << "4. Eliminar primer nodo" << endl;
        cout << "5. Eliminar ultimo nodo" << endl;
        cout << "6. Buscar nodo por nombre" << endl;
        cout << "7. Mostrar numero de nodos" << endl;
        cout << "8. Mostrar contenido completo de la lista" << endl;
        cout << "9. Eliminar lista completa" << endl;
        cout << "10. Añadir 10 nodos con datos aleatorios" << endl;
        cout << "11. Simular Colas (FIFO)" << endl;
        cout << "12. Simular Pilas (LIFO)" << endl;
        cout << "13. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;

        switch (opcion) {
            // Implementar las acciones del menú

            case 1:
                cout << "Nombre: ";
                cin >> nombre;
                cout << "Apellido: ";
                cin >> apellido;
                cout << "Edad: ";
                cin >> edad;
                lista.agregarNodoAlFinal(nombre, apellido, edad);
                break;

            case 2:
                cout << "Nombre: ";
                cin >> nombre;
                cout << "Apellido: ";
                cin >> apellido;
                cout << "Edad: ";
                cin >> edad;
                lista.agregarNodoAlPrincipio(nombre, apellido, edad);
                break;

            case 3:
                cout << "Nombre del nodo a eliminar: ";
                cin >> nombre;
                lista.eliminarNodoPorNombre(nombre);
                break;   

            case 4:
                lista.eliminarPrimerNodo();
                break;

            case 5:
                lista.eliminarUltimoNodo();
                break;                             
                
            case 6:
                cout << "Ingrese el nombre a buscar: ";
                cin >> nombre;
                posicion = lista.buscarNodoPorNombre(nombre);
                if (posicion != -1) {
                    cout << "Nodo encontrado en la posición: " << posicion << endl;
                }
                break;

            case 7:
                lista.mostrarNumeroNodos();
                break;

            case 8:
                lista.mostrarContenidoCompletoLista();
                break;

            case 9:
                lista.eliminarListaCompleta();
                break;

            case 10:
                lista.rellenarListaConDatosAleatorios();
                break;

            case 11:
                lista.simularColasFIFO();
                break;

            case 12:
                lista.simularPilasLIFO();
                break;

            default:
                break;
        }
    } while (opcion != 12);

    return 0;
}

// Implementación de funciones de Lista irán aquí
