#include <stdio.h>

int main() {
    // Declaración de variables para las calificaciones parciales y la final
    float parcial1 = 8.5;
    float parcial2 = 9.0;
    float parcial3 = 7.8;
    float parcial4 = 9.2;
    float calificacion_final;

    // Cálculo de la calificación final (promedio de las 4 parciales)
    calificacion_final = (parcial1 + parcial2 + parcial3 + parcial4) / 4.0;

    // Impresión de las calificaciones y la calificación final
    printf("Calificación parcial 1: %.2f\n", parcial1);
    printf("Calificación parcial 2: %.2f\n", parcial2);
    printf("Calificación parcial 3: %.2f\n", parcial3);
    printf("Calificación parcial 4: %.2f\n", parcial4);
    printf("La calificación final del alumno es: %.2f\n", calificacion_final);

    return 0;
}
//converti km a millas aplicando la equivalencia correcta
