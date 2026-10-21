#include <stdio.h>
#include <stdlib.h>

void dividir(int a,int b,int *cociente, int *resto){
    *cociente = a/b;
    *resto = a % b;
}

void reservar_valor(int **pp,int valor){

    *pp = (int *)malloc(sizeof(int));
    **pp = valor;
}

int main(void){

    int a = 10;
    int *ptr = &a;
    int **pp = &ptr; 

    printf("a : %d, *ptr = %d, **pp = %d\n",a, *ptr,**pp);
    printf("a : %p, *ptr = %p, *pp = %p\n",(void *)&a,(void *)ptr,(void *)*pp);
    printf(" &ptr = %p, pp = %p\n",(void *)&ptr,(void *)pp);

    **pp = 99;
    printf("**pp = %d, a = %d\n",**pp,a);

    int c = 0,r= 0;
    dividir(8,3,&c,&r);
    printf("a : %d, b : %d , cociente : %d, resto : %d\n",8,3,c,r);

    reservar_valor(pp,67);

    printf("*p = %d\n",*ptr);

    free(ptr);


    return 0;
}