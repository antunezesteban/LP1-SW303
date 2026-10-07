#include <stdio.h>

int main(void){
    int a = 7;
    int *p = &a;

    printf("La direccion de a es %p\n El valor del puntero es : %p\n\n",&a,p);
    printf("Valor de a es %d \n Valor de *p es %d\n\n",a,*p);
    printf("Mostrar que * y & son complementarios \n");
    printf("&*p 0 %p\n*&p = %p\n",&*p,*&p);


    return 0;
}