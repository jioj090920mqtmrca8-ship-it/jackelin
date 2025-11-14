#include <stdio.h>

int main() {
    float base, altura, area, costo;

    printf("Ingrese base y altura del terreno: ");
    scanf("%f %f", &base, &altura);

    area = base * altura;
    costo = area * 1500;

    printf("El costo del terreno es: $%.2f\n", costo);
    return 0;
}
//costos del terreno
