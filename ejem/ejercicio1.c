#include <stdio.h>

void muestra_bytes(const unsigned char *p,size_t lon ){

    
    for(size_t i = 0; i < lon;++i){
        printf(" %02X ",p[i]);
    }
    printf("\n");
}

int main(void){

    int A[] = {1,2,3,4,5};


    int *ptr = A;
    for(int i = 0; i < 5;++i){
        printf("A [%d] = %d (0X%08X) y %p\n",i,A[i],A[i],(void *)ptr +i);
        printf("Bytes : ");
        muestra_bytes((unsigned char *)&A[i],sizeof(A[i]));
    }

    double d = 3.14;

    double *pun = &d;
    printf("d = %f  y %p\n",d,(void *)pun);
    printf("Bytes : ");
    muestra_bytes((unsigned char *)&d,sizeof(d));

    return 0;
}