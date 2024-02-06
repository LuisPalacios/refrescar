// Programa para pruebas en C++
//

// Jugar con string !!

#include <iostream>
#include <string>

using namespace std;

int main()
{

      // Revertir el orden de una cadena
      //
      string a = "Hola mundo!";
      string b = "¿qué tal estás?";

      if (a.empty() == 0)
            cout << "La cadena 'a' tiene información" << endl;
      else
            cout << "La cadena 'a' está vacía" << endl;

      if (a.compare(b) == 0)
            cout << "Las cadenas son iguales" << endl;
      else
            cout << "Las cadenas son distintas" << endl;

      cout << "El sexto caracter de 'a' es " << a[5] << endl;
      cout << "El sexto caracter de 'a' es " << a.at(5) << endl;

      a.append (" ");
      a.append (b);

      cout << "Subcadena de 'a' desde la 5 hasta la 8: " << a.substr(5, 3) << endl;

      cout << "Resultado: " << a << endl;

      return 0;
}
