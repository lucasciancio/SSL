#include <stdio.h>
#include "Conversion.h"

const int paso = 20;
const int minimo = 0;
const int maximo = 300;

void TablaCel_Fahr();
void TablaFahr_Cel();


int main (void) {

    TablaCel_Fahr();
    
    TablaFahr_Cel();

    return 0;
}



void TablaCel_Fahr() {
    printf("Tabla de conversion de celsius a fahrenheit\n\n");
    printf("%-6s \t %-6s \n", "C", "F");
    
    float fahr;
    
    for (float celsius = minimo; celsius <= maximo; celsius += paso) {
        fahr = Fahrenheit(celsius);
        printf("%-6.1f \t %-6.1f \n", celsius, fahr);
    }

    printf("\n\n\n");
}




void TablaFahr_Cel() {
    printf("Tabla de conversion de fahrenheit a celsius\n\n");
    printf("%-6s \t %-6s \n", "F", "C");

    float celsius;

    for (float fahr = minimo; fahr <= maximo; fahr += paso) {
        celsius = Celsius(fahr);
        printf("%-6.1f \t %-6.1f \n", fahr, celsius);
    }

    printf("\n\n\n");
}
