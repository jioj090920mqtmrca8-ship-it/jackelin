#include <stdio.h>

int main() {
    float cm, pulgadas;

    printf("Ingrese centimetros: ");
    scanf("%f", &cm);

    pulgadas = cm / 2.54;

    printf("%.2f cm equivalen a %.2f pulgadas\n", cm, pulgadas);
    return 0;
}
//primero vi el cambiuo de cm a pulgadas
