#include <stdio.h>

int main(void){
    int x = 42;
    int *p = &x;
    int **pp = &p;

    //b) valores
    printf("x : %d  ",x);
    printf(",&x : %p\n",&x);
    printf("*p : %d ", *p);
     printf(",&p : %p\n",&p);
    printf("**p : %d ",**pp);
    printf(",pp : %p\n",&pp);


    //c)


    printf("*p : %d",100);
    *p = 100;
    printf("--> x = %d\n",x);

    printf("**pp : %d",200);
    **pp = 200;
    printf("--> x = %d",x);
    
   /*Preguntas guia

        a) ¿Por qué printf("%p", p) requiere el cast (void *)? (Es por portabilidad y por las reglas de variadic functions.)
            -se debe a el funcinamiento de printf y las reglas estandar para laportabilidad del codigo.
            si no le agreas el cast (void *) correra de manera igual, pero cuando lo lleves a otra arquitectura mas antiguo podrian ocurrir errores.
        b) ¿Qué diferencia hay entre int *p e int* p? ¿Y entre int *p, q y int *p, *q?
            -No hay diferencia, lo que nos dice es que se define un puntero a un entero.
            -En cuanto al segundo,int *p, q y int *p, *q    , aca se observa que en el primero llamas un puntero p, *p,
            pero no defines q como puntero, y causa un error, en el segundo se definen propiamente dos punteros *p y *q

   */

    return 0;
}