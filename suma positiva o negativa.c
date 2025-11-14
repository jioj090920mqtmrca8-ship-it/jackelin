#include <stdio.h>

int main() {
    float a, b, suma;

    printf("Ingrese dos numeros: ");
    scanf("%f %f", &a, &b);

    suma = a + b;

    printf("La suma es: %.2f\n", suma);

    if (suma > 0)
        printf("La suma es positiva\n");
    else if (suma < 0)
        printf("La suma es negativa\n");
    else
        printf("La suma es cero\n");

    return 0;
}
