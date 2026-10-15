#include <stdio.h>

int A(int m, int n) {
    static int cont = 0;   
    static int ni = 0; 

    ++cont;
    ++ni;

    int resultado;
    if (m == 0) {
        return n + 1;
    }
    if (n == 0) {
        return A(m - 1, 1);
    }else{
        return A(m - 1, A(m, n - 1));
    }
    
    ni--;
    if (ni == 0) {          
        printf("Llamadas totales: %d\n", cont);
        cont = 0;         
    }
    return resultado;
}

int main(void){

    int resultado = A(3,4);
    
    printf("Resultado : %d\n",resultado);
    

    return 0;
}




