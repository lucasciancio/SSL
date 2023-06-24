// Tests de las funciones de conversión.

#include <assert.h>
#include "Conversion.h"
#include <stdlib.h>

const float epsilon = 0.001; 

int floatcomp(float x, float y);


int main(void) {
    
    // Pruebas función Celsius

    assert(floatcomp(Celsius(0.0),-17.8) == 1);
    assert(floatcomp(Celsius(160.0),71.1) == 1);
    assert(floatcomp(Celsius(300.0),148.9) == 1);

    // Pruebas función Fahrenheit

    assert(floatcomp(Fahrenheit(0.0),32.0) == 1);
    assert(floatcomp(Fahrenheit(160.0),320.0) == 1);
    assert(floatcomp(Fahrenheit(300.0),572.0) == 1);

    return 0;
}



int floatcomp(float x, float y) {
    return abs(x-y) < epsilon;
}



// TABLAS DE CASOS DE PRUEBA

/*

FUNCIÓN CONVERTIR A CELSIUS

fórmula: °C = 5/9 * (°F - 32)

FAHR   |CEL
0.0    |-17.8
160.0  |71.1 
300.0  |148.9

FUNCIÓN CONVERTIR A FAHRENHEIT

fórmula °F = °C * 9/5 + 32

CEL    |FAHR
0.0    |32.0
160.0  |320.0
300.0  |572.0


*/