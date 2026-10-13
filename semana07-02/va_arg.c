#include <stdio.h>
#include <stdarg.h>
// Función que suma 'n' cantidad de números enteros
int sumar_numeros(int cantidad, ...) {

    va_list argumentos;
    int suma = 0;
    // Inicializa la lista usando el último parámetro fijo ('cantidad')
    va_start(argumentos, cantidad);

    for (int i = 0; i < cantidad; i++) {
        // Extrae el siguiente argumento asumiendo que es un 'int'
        suma += va_arg(argumentos, int);
    }

    // Libera la memoria de la lista
    va_end(argumentos);
    return suma;
}


int main() {
    int resultado1 = sumar_numeros(3, 10, 20, 30);
    int resultado2 = sumar_numeros(5, 1, 2, 3, 4, 5);
    printf("Suma 1: %d\n", resultado1); // Salida: 60
    printf("Suma 2: %d\n", resultado2); // Salida: 15
    return 0;
}   