#include <stdio.h>

int main() {
    int m[3][4];
    int t[4][3];
    int stot = 0;
    int k;

    // a) Lectura de la matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    // b) e i) Imprimir matriz y suma de cada fila
    printf("Matriz 3x4:\n");
    for (int i = 0; i < 3; i++) {
        int sfil = 0;
        for (int j = 0; j < 4; j++) {
            printf("%4d", m[i][j]);
            sfil += m[i][j];
        }
        printf("  |  suma fila = %d\n", sfil);
    }

    // ii) Suma de cada columna y iii) Suma total
    printf("---------------\n");
    for (int j = 0; j < 4; j++) {
        int scol = 0;
        for (int i = 0; i < 3; i++) {
            scol += m[i][j];
        }
        printf("%4d", scol);
        stot += scol;
    }
    printf("  (sumas de columnas)\n\n");
    printf("Suma total: %d\n\n", stot);

    // iv) Transpuesta int t[4][3] e impresion
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            t[j][i] = m[i][j];
        }
    }

    printf("Transpuesta 4x3:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d", t[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // d) Multiplicar por un escalar k
    scanf("%d", &k);
    printf("Escalar k = %d:\n", k);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d", m[i][j] * k);
        }
        printf("\n");
    }

    return 0;
}