#include <stdio.h>
#include <math.h> // Para usar M_PI (valor de pi)

int main() {
    // Declaración de variables
    float radio = 5.0;
    float altura = 10.0;
    float area_base;
    float volumen;

    // Cálculo del área de la base (pi * radio^2)
    area_base = M_PI * radio * radio;

    // Cálculo del volumen (área de la base * altura)
    volumen = area_base * altura;

    // Impresión de los resultados
    printf("Radio del cilindro: %.2f\n", radio);
    printf("Altura del cilindro: %.2f\n", altura);
    printf("El área de la base del cilindro es: %.2f\n",);
//primero vi la base del triangulo
