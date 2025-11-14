#include <stdio.h>

int main() {
    float c1, c2, c3, c4, promedio;

    printf("Ingrese las 4 calificaciones: ");
    scanf("%f %f %f %f", &c1, &c2, &c3, &c4);

    promedio = (c1 + c2 + c3 + c4) / 4;

    printf("Calificacion final: %.2f\n", promedio);
    return 0;
}
//lei las calificaciones, calcule y lo imprimi.
