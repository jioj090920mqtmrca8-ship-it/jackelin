#include <stdio.h>

int main() {
    float c1, c2, c3, c4, c5, promedio;

    printf("Ingrese cinco calificaciones: ");
    scanf("%f %f %f %f %f", &c1, &c2, &c3, &c4, &c5);

    promedio = (c1 + c2 + c3 + c4 + c5) / 5;

    printf("Promedio: %.2f\n", promedio);

    if (promedio >= 6)
        printf("El alumno fue APROBADO\n");
    else
        printf("El alumno fue REPROBADO\n");

    return 0;
}
