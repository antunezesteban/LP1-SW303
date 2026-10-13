#include <stdio.h>

#define FILAS 3
#define COLUMNAS 4

// Función para rellenar la matriz usando aritmética de punteros dobles
void llenarMatriz(int** matriz, int filas, int columnas) {
    int contador = 1;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            // Modifica el valor apuntado mediante doble indirección
            *(*(matriz + i) + j) = contador++;
        }
    }
}

// Función para recorrer y mostrar la matriz usando aritmética de punteros dobles
void mostrarMatriz(int** matriz, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            // Accede al valor usando *(*(matriz + i) + j)
            printf("%d\t", *(*(matriz + i) + j));
        }
        printf("\n");
    }
}

int main() {
    // 1. Matriz normal en la memoria local (Stack)
    int matrizBase[FILAS][COLUMNAS];

    // 2. Un arreglo de punteros intermedio para simular la estructura dinámica
    int* mapeoFilas[FILAS];

    // 3. Enlazamos cada posición del arreglo a las filas de la matriz base
    for (int i = 0; i < FILAS; i++) {
        mapeoFilas[i] = matrizBase[i];
    }

    // 4. Creamos el puntero doble apuntando al inicio de nuestro arreglo de punteros
    int** miPunteroDoble = mapeoFilas;

    // 5. Enviamos el puntero doble a las funciones de procesamiento
    llenarMatriz(miPunteroDoble, FILAS, COLUMNAS);

    printf("Matriz recorrida con puntero doble (Sin stdlib.h):\n");
    mostrarMatriz(miPunteroDoble, FILAS, COLUMNAS);

    // Nota: Al no usar malloc, no existe riesgo de fugas de memoria 
    // y no es necesario utilizar la función free().
    return 0;
}
