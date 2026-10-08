#include <stdio.h>
#include <stdlib.h>
int main(void){

    int *p1 = NULL;

    //pedir memoria para un solo entero, para mas es asi p1 = (int *)malloc(sizeof(int) * cantidad);
    p1 = (int *)malloc(sizeof(int));

    //verificar 
    if(p1 == NULL){
        printf("No hay memoria");
        return 1;
    }

    //usamos memoria

    printf("Introduce tu edad : ");
    scanf("%d",p1);

    printf("La edad guardada es : %d\n ",*p1);

    //libera la memoria para que no halla leaks
    free(p1);
    p1 = NULL;//buena practica para que apunte a nada y no basura



    return 0;
}