// Funciones de conversión.

#include <stdio.h>
#include "Conversion.h"

float Celsius(float fahr) {
    float celsius = (fahr - 32.0) * 5.0/9.0;
    return celsius;
}


float Fahrenheit(float celsius) {
    float fahr = celsius * 9.0/5.0 + 32.0;
    return fahr;
}