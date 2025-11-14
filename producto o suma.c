#include <stdio.h>

int main() {
    float n1, n2, n3, resultado;

    printf("Ingrese tres numeros: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    if (n1 < 0)
        resultado = n1 * n2 * n3;
    else
        resultado = n1 + n2 + n3;

    printf("El resultado es: %.2f\n", resultado);
    return 0;
}
