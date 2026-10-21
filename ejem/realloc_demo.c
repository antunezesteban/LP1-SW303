#include <stdio.h>
#include <stdlib.h>

int main(void){

    int cap = 2;
    int *array1 = calloc(2,cap);

    int cont = 0;
    int num = 0;
    int i = 0;
    do{
        if(i == cap){
            cap = 2*cap;
            realloc(array1,cap);
            ++cont;
        }
        printf("Ingrese un numero (-1 para terminar): ");
        scanf("%d", &num);
        array1[i++] = num;
         

    }while(num != -1);

    for(int k = 0; k < i; ++k){
        printf(" %d ",array1[k]);
    }
    printf("\n");


    printf("Elementos : %d\n Capacidad final : %d\n, Realloc llamados : %d\n",i - 1,cap,cont);
    printf("Contenido : ");
    for(int k = 0; k < i - 1;++k){
        printf(" %d ",array1[k]);
    }
    printf("\n");

    free(array1);

    return 0;
}