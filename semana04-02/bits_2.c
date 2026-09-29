#include <stdio.h>

int main(){

    unsigned int num = 0;

    printf("Ingrese un numero : ");
    scanf("%d", &num);

    int p = 0;
    int b = 0;
    
    printf("Ingrese posicion del bit : ");
    scanf("%d", &p);

    printf("Ingrese el num de bit (0 o 1) : " );
    scanf("%d", &b);

    unsigned int n_num = (num & -(1<<p)) | (b << p);

    printf("El numero modif : %d\n ",n_num);




    return 0;
}