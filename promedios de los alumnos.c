#include <stdio.h>

int main() {
    float c1, c2, c3, promedio;

    printf("Ingrese las tres calificaciones: ");
    scanf("%f %f %f", &c1, &c2, &c3);

    promedio = (c1 + c2 + c3) / 3;

    printf("Promedio: %.2f\n", promedio);

    if (promedio >= 9)
        printf("El alumno esta EXENTO\n");
    else if (promedio >= 6 && promedio < 9)
        printf("El alumno esta en ORDINARIO\n");
    else
        printf("El alumno esta en EXTRAORDINARIO\n");

    return 0;
}
