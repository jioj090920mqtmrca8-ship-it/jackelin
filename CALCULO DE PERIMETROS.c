#include <stdio.h>

int main() {
    // Declaración de variables
    float base = 15.0;
    float altura = 8.0;
    float perimetro;
    float superficie;

    // Cálculo del perímetro
    perimetro = 2 * (base + altura);

    // Cálculo de la superficie
    superficie = base * altura;

    // Impresión de los resultados
    printf("Base del rectángulo: %.2f\n", base);
    printf("Altura del rectángulo: %.2f\n", altura);
    printf("El perímetro del rectángulo es: %.2f\n", perimetro);
    printf("La superficie del rectángulo es: %.2f\n", superficie);

    return 0;
}
