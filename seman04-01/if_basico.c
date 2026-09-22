#include <stdio.h>

int main(void){

    int edad;
    printf("Ingresa la edad : ");
    scanf("%d", &edad);

    if(edad < 18){
        printf("Menor de edad");
    }else{
        printf("mayor de edad");
    }



    return 0;
}