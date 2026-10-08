#include <stdio.h>

#include <stdlib.h>

int main(void){

    int cantidad_notas;
    float *notas = NULL;
    float suma = 0.0;

    printf("Cuantas notas desea ingresar ? : ");
    scanf("%d", &cantidad_notas);

    //pedir memoria para la cantidad de notas tipo float
    //multiplicar por la cantidad
    notas = (float *)malloc(sizeof(float)*cantidad_notas);

    if(notas == NULL){
        printf("error al asignar memoria");
        return 1;
    }

    //ahora llenamos el arreglo dinamico
    for(int i =0; i<cantidad_notas;++i){

        printf("Ingresa nota  %d : ",i  + 1);
        scanf("%f",&notas[i]);
        suma += notas[i];
    }


    printf("\n el promedio de las notas es %.2f ",suma /cantidad_notas);

    //liberamos memoria
    free(notas);
    notas = NULL;
    return 0;
}