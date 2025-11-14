#include <stdio.h>
#include <math.h>

int main() {
    float cat1, cat2, hip;

    printf("Ingrese los dos catetos: ");
    scanf("%f %f", &cat1, &cat2);

    hip = sqrt(cat1 * cat1 + cat2 * cat2);

    printf("La hipotenusa es: %.2f\n", hip);
    return 0;
}
//calcule la hipotenusa de un triangulo.
