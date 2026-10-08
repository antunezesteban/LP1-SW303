#include <stdio.h>
#include <stdlib.h>

//matriz y asignar mediante punteros
int main(void){

    int filas = 2;
    int columnas = 3;

    //creamos un arreglo de punteros
    int **matriz = (int **)malloc(filas *sizeof(int));

    //para cada fila asignamos memoria para cada columna
    for(int i = 0; i < filas; ++i){

        matriz[i] = (int *)malloc(columnas*sizeof(int));
    }

    //llenamos la matriz con datos

    int cont = 1;
    for(int i = 0; i <filas;++i){
        for(int j =0;  j <  columnas;++j){

            matriz[i][j] = cont++;
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    //al final liberar memoria
    for(int i = 0; i < filas; ++i){
        free(matriz[i]);//libera cada columna
    }
    free(matriz);//libera las filas

    return 0;
}