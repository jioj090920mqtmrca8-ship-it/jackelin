
#include <stdio.h>

int main() {
    float base, altura, area, costo;

    printf("Ingrese base y altura del terreno: ");
    scanf("%f %f", &base, &altura);

    area = base * altura;
    costo = area * 750;

    if (area > 500)
        costo = costo * 0.9;

    printf("Costo total: $%.2f\n", costo);
    return 0;
}
//caqlcule el costo del terreno
