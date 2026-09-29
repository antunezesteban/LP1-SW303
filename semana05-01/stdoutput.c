#include <stdio.h>

int main(){
    int num;
    printf("Ingrese un numero entero : ");
    scanf("%d", &num);

    if(num > 0){
        fprintf(stdout, "Numero entero positivo correcto");
    }else{
        fprintf(stderr,"Numero negativo ingresado, irreconocible, error.");
    }

    return 0;
}