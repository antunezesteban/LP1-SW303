#include <stdio.h>
#include <stdlib.h>

int main(void){

    int filas,columnas;
    int **mapa = NULL;

    printf("Define las dimensiones del mapa :(filas columnas): ");
    scanf("%d %d",&filas, &columnas);

    //asigno memoria filas
    mapa = (int **)malloc(sizeof(int)*filas);

    if(mapa ==NULL){
        return 1;
    }
    //asigno memoria para columnas
    for(int i = 0; i < filas;i++){
        mapa[i]= (int *)malloc(sizeof(int)* columnas);
        if(mapa[i] == NULL){
            return 1;
        };
    }


    //llenamos la matriz
    printf("\nMAPA DINAMICO\n");
    for(int i = 0; i < filas;++i){
        for(int j = 0; j < columnas;++j){
             mapa[i][j] = i +j;
             printf("[%d]\t",mapa[i][j]);
        }
        printf("\n");
    }

    //liberamos las filas

    for(int i = 0; i <filas;++i){
        free(mapa[i]);
    }

    //liberamos el puntero
    free(mapa);
    mapa = NULL;

    printf("memoria eliminadad o liberada");
    return 0;
}