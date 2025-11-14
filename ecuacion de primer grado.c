#include <stdio.h>

int main() {
    float a, b, x;

    printf("Resolver la ecuacion ax + b = 0\n");
    printf("Ingrese el valor de a: ");
    scanf("%f", &a);
    printf("Ingrese el valor de b: ");
    scanf("%f", &b);

    if (a == 0)
        printf("No hay solucion (a no puede ser cero)\n");
    else {
        x = -b / a;
        printf("La solucion es: x = %.2f\n", x);
    }

    return 0;
}
//primero calcule la ecuacion
