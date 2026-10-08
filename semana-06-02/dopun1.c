#include <stdio.h>

int main(void){

    int a = 45;
    int *p1 = &a;
    int **p2 = &p1;

    printf("El valor original : %d\n ",a);

    //modificamos usando doble puntero

    **p2 = 78;

    printf("Ahora el nuevo valor . %d\n", a);
    printf("Acceso directo con puntero doble : %d\n",**p2);
    
    return 0;
}