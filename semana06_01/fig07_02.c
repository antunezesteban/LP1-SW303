#include <stdio.h>

int cubeByValue(int n);//prototipo

int main(void){
    int number = 5;


    printf("El valor original es %d\n",number);
    number = cubeByValue(number);
    printf("El nuevo valor de number : %d\n",number);
    return 0; 
}


//calcular el valor y return

int cubeByValue(int n){
    return n*n*n;
}