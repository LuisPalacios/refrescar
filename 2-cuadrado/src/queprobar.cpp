// Esta es la función que queremos probar con Unit Tests
#include <math.h>

double raizCuadrada(const double a) {
    double b = sqrt(a);
    if(b != b) { // nan check
        return -1.0;
    }else{
        return sqrt(a);
    }
}

