#include <stdio.h>

int main() {
    float a, b, c, producto;

    printf("Ingrese tres numeros: ");
    scanf("%f %f %f", &a, &b, &c);

    producto = a * b * c;

    printf("El producto es: %.2f\n", producto);
    return 0;
}
//calcule la multiplicacion de 3 num
