#include <stdio.h>

int main() {
    float promedio;

    printf("Ingrese el promedio: ");
    scanf("%f", &promedio);

    if (promedio >= 6)
        printf("Aprobado\n");
    else
        printf("Reprobado\n");

    return 0;
}
