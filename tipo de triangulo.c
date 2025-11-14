#include <stdio.h>

int main() {
    float a, b, c;

    printf("Ingrese las longitudes de los tres lados: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == b && b == c)
        printf("El triangulo es equilatero\n");
    else if (a == b || a == c || b == c)
        printf("El triangulo es isosceles\n");
    else
        printf("El triangulo es escaleno\n");

    return 0;
}
