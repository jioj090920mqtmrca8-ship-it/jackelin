#include <stdio.h>

int main() {
    float c1, c2, c3, promedio;

    printf("Ingrese las tres calificaciones: ");
    scanf("%f %f %f", &c1, &c2, &c3);

    promedio = (c1 + c2 + c3) / 3;

    if (promedio >= 9)
        printf("Exento\n");
    else
        printf("Ordinario\n");

    return 0;
}
//calcule el promedio
