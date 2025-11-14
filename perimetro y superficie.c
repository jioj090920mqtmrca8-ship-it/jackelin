#include <stdio.h>

int main() {
    float base, altura, perimetro, superficie;

    printf("Ingrese la base: ");
    scanf("%f", &base);

    printf("Ingrese la altura: ");
    scanf("%f", &altura);

    perimetro = 2 * (base + altura);
    superficie = base * altura;

    printf("Perimetro: %.2f\n", perimetro);
    printf("Superficie: %.2f\n", superficie);
    return 0;
}
//calcule el perimetro yb la base
