// Programa para pruebas en C++
//

// Jugando con str*


#include <iostream>
#include <string.h>

using namespace std;

char *invierte(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

int main() {

    // Revertir el orden de una cadena
    //
    char s[15] = "semana";
    invierte(s);
    cout << s <<endl;


    // Lo siguiente producirá un crash.. 
    // 
    // hola mundo01234567890123456780
    // [1]    77165 abort      ./build/programa
    int len=0;
    char a[15] = "hola mundo";
    len = strlen(a);
    cout <<"longitud de a: " << len <<endl;
    char b[22] = "01234567890123456780\n";
    strcat(a,b);
    cout << a;

    return 0;
}

