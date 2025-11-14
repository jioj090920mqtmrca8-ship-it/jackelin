#include <stdio.h>

int main() {
    // Declaración de variables para almacenar los tres números y su suma
    float numero1 = 10.5;
    float numero2 = 3.2;
    float numero3 = 4.7;
    float suma;

    // Cálculo de la suma de los tres números
    suma = numero1 + numero2 + numero3;

    // Impresión de los números y su suma
    printf("El primer número es: %.2f\n", numero1);
    printf("El segundo número es: %.2f\n", numero2);
    printf("El tercer número es: %.2f\n", numero3);
    printf("La suma de los tres números es: %.2f\n", suma);

    return 0;
}
