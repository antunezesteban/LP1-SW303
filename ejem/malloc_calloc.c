#include <stdio.h>
#include <stdlib.h>

int main(void){

    int *array1 = malloc(10*sizeof(int));
    int *array2 = calloc(9,sizeof(int));

    for(int i = 0;i < 10;++i){
        array1[i] = i; 
    }

    for(int i = 0; i < 10;++i){
        printf(" %d ",array1[i]);
    }

    printf("\n");

    for(int i = 0; i < 10;++i){
        printf(" %d ",array2[i]);
    }

    printf("\n");

    printf("Despues de inicializar : \n");

    for(int i = 0;i < 10;++i){
        array1[i] = i; 
    }

    for(int i = 0; i < 10;++i){
        printf(" %d ",array1[i]);
    }

    printf("\n");

    for(int i = 0; i < 10;++i){
        printf(" %d ",array2[i]);
    }

    printf("\n");

    free(array1);
    
    free(array2);

    return 0;
}