// Esta es la función que queremos probar con Unit Tests
#include <math.h>

double raizCuadrada(const double a) {
    if (a < 0.0 ) {
        return -1.0;
    } else {
        return sqrt(a);
    }
}

