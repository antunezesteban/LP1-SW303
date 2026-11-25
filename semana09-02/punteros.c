#include <stdio.h>


int main(void){

    int numeros[5] = {10,20,30,40,50};
    int *ptr = numeros;

    for(int i  =0; i < 5;++i){

        printf("Numeros [%d]  = %d (%p)\n",i+ 1,*(ptr + i),ptr + i);
        
    }

    printf("Direccion actual del punetero : %p\n",ptr);

    int **pp = &ptr;
    printf("Direccion de puntero mediante doble puntero : %p \n",pp);

    return 0;
}