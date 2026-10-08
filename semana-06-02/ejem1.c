#include <stdio.h>
void agregar(int *p){
    (*p)++;//al utilizar puntero agarro el valor al que apunta y lo modifico
    printf("valor modificado por el pnutero de la funcion %d",*p);
}

int main(void){

    int a = 1;
    int *ptr = &a;

    agregar(ptr);



    return 0;
}