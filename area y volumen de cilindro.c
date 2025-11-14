#include <stdio.h>
#define PI 3.1416

int main() {
    float radio, altura, area, volumen;

    printf("Ingrese el radio: ");
    scanf("%f", &radio);

    printf("Ingrese la altura: ");
    scanf("%f", &altura);

    area = 2 * PI * radio * (radio + altura);
    volumen = PI * radio * radio * altura;

    printf("Area: %.2f\n", area);
    printf("Volumen: %.2f\n", volumen);
    return 0;
}
//calcule el afrea y volumen
