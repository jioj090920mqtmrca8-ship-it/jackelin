#include <stdio.h>
int main() {
    float km, millas;
    printf("Ingrese kilometros: ");
    scanf("%f", &km);
    millas = km * 0.621371;
    printf("%.2f km equivalen a %.2f millas", km, millas);
    return 0;
}
//sume 3 numeros y mostre el resultado.
