#include <stdio.h>

int main() {
    // Declaración de arreglos de caracteres para almacenar los nombres
    char marca[50];
    char modelo[50];

    // Solicitud de entrada al usuario
    printf("Introduce el nombre de la marca del automóvil: ");
    scanf("%s", marca); // Lee la marca

    printf("Introduce el nombre del modelo: ");
    scanf("%s", modelo); // Lee el modelo

    // Impresión del modelo seguido del nombre
    printf("Modelo: %s, Marca: %s\n", modelo, marca);

    return 0;
}
//lei la marca del auto y el modelo y los imprimi
