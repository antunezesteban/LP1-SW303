#include <stdio.h>
int main() {
    char destino[50]; // Buffer con espacio suficiente
    char producto[] = "Laptop";
    float precio = 899.99;
    int cantidad = 2;
    // Construimos la cadena combinando texto, strings, flotantes y enteros
    sprintf(destino, "Pedido: %d x %s - Total: $%.2f", cantidad, producto, precio);
    printf("Resultado de sprintf: \n%s\n", destino);
    // Salida: Pedido: 2 x Laptop - Total: $899.99
    return 0;
}
