#include <stdio.h>

int main() {
    int n;

    printf("Ingrese un numero del 1 al 7: ");
    scanf("%d", &n);

    if (n == 1)
        printf("Lunes\n");
    else if (n == 2)
        printf("Martes\n");
    else if (n == 3)
        printf("Miercoles\n");
    else if (n == 4)
        printf("Jueves\n");
    else if (n == 5)
        printf("Viernes\n");
    else if (n == 6)
        printf("Sabado\n");
    else if (n == 7)
        printf("Domingo\n");
    else
        printf("Error de opcion\n");

    return 0;
}
