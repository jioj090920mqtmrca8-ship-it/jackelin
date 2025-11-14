#include <stdio.h>

int main() {
    // Declaración de variables para centímetros y pulgadas
    float centimetros = 25.4; // Ejemplo: 25.4 cm
    float pulgadas;

    // Factor de conversión: 1 pulgada = 2.54 centímetros
    float factor_conversion = 2.54;

    // Cálculo de la conversión a pulgadas
    pulgadas = centimetros / factor_conversion;

    // Impresión del resultado
    printf("%.2f centímetros equivalen a %.2f pulgadas.\n", centimetros, pulgadas);

    return 0;
}
//primero vi la coversion de un numero
