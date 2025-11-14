#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, x1, x2;

    printf("Resolver ecuacion de segundo grado (ax^2 + bx + c = 0)\n");
    printf("Ingrese a, b y c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("No es una ecuacion cuadratica (a no puede ser 0)\n");
    } else {
        d = b * b - 4 * a * c;

        if (d < 0)
            printf("No tiene soluciones reales\n");
        else {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            printf("x1 = %.2f\nx2 = %.2f\n", x1, x2);
        }
    }

    return 0;
}
//primero resolvi la ecuacion de priomer grado
