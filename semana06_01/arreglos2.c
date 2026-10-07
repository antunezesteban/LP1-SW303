#include <stdio.h>
#define SIZE 5
int main(void){


    int array[SIZE] = {0};//otra forma de llenar a todos los valores de este array con ceros

    for(size_t i = 0;i<SIZE;++i){
        array[i] = 2 + 2*i;
    }

    printf("%s%8s\n","Element","Value");
    
    for(size_t i = 0; i < SIZE;++i){

        printf("%7zu%8d\n",i, array[i]);
    }

    return 0;
}