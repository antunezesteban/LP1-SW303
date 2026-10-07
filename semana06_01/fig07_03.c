#include <stdio.h>

void cubeByReference(int *p);//prototipo

int main(void){
    int number = 5;


    printf("El valor original es %d\n",number);
    cubeByReference(&number);
    printf("El nuevo valor de number : %d\n",number);
    return 0; 
}


//calcular el valor y puntero para modificar el valor inicial mediante su direccion que tiene el puntero

void cubeByReference(int *p){
    *p = *p * *p * *p;
}



