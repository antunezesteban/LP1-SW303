#include <stdio.h>

int main(void){

    int n[5];//array de 5 enteros

    //definir los elementos con cero
    for(size_t i = 0;i < 5;++i){

        n[i] = 0;//setear los elementos a 0
    }

    printf("%s%8s\n","Element","Value");

    //output
    for(size_t i = 0;i <5;++i){
        printf("%7zu%8d\n",i,n[i]);
    }



    return 0;
}