#include <stdio.h>

int main (void){

    int v[8] = {2,7,3,6,9,8,7,1};

    int *ptr = v;

    int suma = 0,mayor = -1;
    float prom = 0;
    int *ptr2 = NULL;
    int *ptr_f = NULL;

    printf("Arreglo : \n");
    for(int i = 0; i < 8;++i){

        printf(" [%d] ",*(ptr + i));
        suma += *(ptr + i);
        if(*(ptr + i) > mayor){
            mayor = *(ptr + i);
        }
        ptr2 = ptr+i;
        ptr_f = ptr +i;
    }
    printf("\n");

    prom = (float)suma/8;

    

    printf("EL mayor es : %d\n",mayor);
    printf("El promedio es : %f\n", prom);

    //recorrer inverso
    printf("Arreglo recorrido inverso : \n");
    for(int i = 0;i < 8;++i){
        printf(" [%d] ",*(ptr2--));
    }
    printf("\n");

    //cambiar el orden arreglo
    

    for(int i = 0; i< 4;++i){
        int temp = *(ptr + i);
        *(ptr + i) = *(ptr_f - i);
        *(ptr_f - i) = temp;
    }

    printf("Arreglo despues de cambio\n");

    for(int i = 0; i < 8;++i){
        printf(" [%d] ",*(ptr + i));
    }
    printf("\n");

    int B[5] = {5,5,5,5,5};

    int *p = B;
    for (int i = 0; i < 5;++i){
        printf("direccion [%d]  : %p\n",i + 1,p + i);
    }

    int dif = 0;
    for(int i = 0; i< 5;++i){
        for(int j = i + 1; j < 5;++j){
            dif = (p + j) - (p + i);
            printf("Diferencia entre (%p) y (%p) : %d\n",p + i , p + j,dif);
        }
    }
    printf("\n");

    char A[5] ;
    char *pun = A;
    int dif2 = 0;
    for(int i = 0; i< 5;++i){
        for(int j = i + 1; j < 5;++j){
            dif2 = (pun + j) - (pun + i);
            printf("Diferencia entre (%p) y (%p) : %d\n",pun + i , pun + j,dif2);
        }
    }
    printf("\n");



    return 0;
}