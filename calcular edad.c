#include <stdio.h>

int main() {
    int anio_nac, edad, anio_actual;

    printf("Ingrese su anio de nacimiento: ");
    scanf("%d", &anio_nac);

    printf("Ingrese el anio actual: ");
    scanf("%d", &anio_actual);

    edad = anio_actual - anio_nac;

    printf("Su edad es: %d anios\n", edad);
    return 0;
}

