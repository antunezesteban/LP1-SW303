#include <stdio.h>
#include <stdlib.h>
void asignar_memoria(int **ptr){
    *ptr = (int *)malloc(sizeof(int));
    **ptr = 100;
}



int main(void){

    int *miptr = NULL;

    //pasamos la direccion de mi puntero
    asignar_memoria(&miptr);

    printf("El valor asignado a mi puntero es :  %d\n",*miptr);

    free(miptr);


    return 0;
}