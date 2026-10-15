#include <stdio.h>
#include "racional.h"

int main(void){

    int a1,a2,b1,b2;
    printf("Ingresa el valor de dos fracciones\n");
    printf("Ingresa el numerador de (1) : \n");
    scanf("%d",&a1);
    printf("Ingresa el denominador de (1) : \n");
    scanf("%d",&a2);
    printf("Ingresa el numerador de (2) : \n");
    scanf("%d",&b1);
    printf("Ingresa el denominador de (2) : \n");
    scanf("%d",&b2);

    int nume_res,deno_res;
    sumar(a1,a2,b1,b2,&nume_res,&deno_res);
    printf("%d/%d + %d/%d = %d/%d\n",a1,a2,b1,b2, nume_res, deno_res);//ya simplificado en sumar

    


    return 0;
}