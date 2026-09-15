#include <stdio.h>

int main(){

    int a , b;

    printf("Ingresa dos numeros : \n");
    printf("Ingrese a : ");
    scanf("%d", &a);

    printf("Ingrese b : ");
    scanf("%d", &b);

    if( a >= b){
        printf("%d es mayor igual que %d", a,b);
    }

    if( a <= b){
        printf("%d es menor igual que %d", a,b);
    }
    
    if( a == b){
        printf("%d es igual que %d", a,b);
    }

    return 0;
}