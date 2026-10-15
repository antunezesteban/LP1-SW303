#include <stdio.h>

int misterio(int n , int *profundidad){
    (*profundidad)++;
    printf("Llamada %d : n = %d\n",*profundidad,n);

    if(n==0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    int resultado = misterio(n-1,profundidad) + misterio(n-2,profundidad);
    return resultado;

}
/*El resultado es como un arbol debido a que hay dos llamadas recursivas
 nos sigue dando resultados hasta que llegue a uno o cero, y por lo cual
 el resultado final seria la suma de varios numeros o 1 o 0*/

int main(void){

    int prof = 0;
    int r = misterio(4,&prof);
    printf("Resultado : %d\n",r);


    return 0;
}