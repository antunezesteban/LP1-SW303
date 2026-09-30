#include <stdio.h>

void  calcular(int n){
    printf("%d ",n);
    int resultado = 0;
    if( n < 10){
        printf("\nEl numero raiz es : %d\n", n);
    }else{
        int temp = n;
        while(temp > 0){
            int dig = temp % 10;
            resultado += dig;
            temp /= 10;
        }
        printf("-->");
        calcular(resultado);
    }

}
int main(){

    int n;
    printf("Ingrese un numero n : ");
    scanf("%d", &n);

    calcular(n);

    return 0;
}