#include <stdio.h>

int main() {
    // Declaración de variables
    float costo_articulo = 75.50;
    float dinero_entregado = 100.00;
    float cambio;

    // Cálculo del cambio
    cambio = dinero_entregado - costo_articulo;

    // Impresión de los datos y el cambio
    printf("Costo del artículo: $%.2f\n", costo_articulo);
    printf("Dinero entregado por el cliente: $%.2f\n", dinero_entregado);
    printf("El cambio a entregar es: $%.2f\n", cambio);

    return 0;
}
