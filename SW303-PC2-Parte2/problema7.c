#include <stdio.h>
#include <stdlib.h>


int *apilar(int *pila, int *capacidad, int *tope,int valor){


    if(pila == NULL){
        pila = calloc(2,*capacidad);
    }
    if(*tope == *capacidad){
        (*capacidad) = 2*(*capacidad);
        realloc(pila,*capacidad);
    }else{
        pila[(*tope)++] = valor; 
        printf("Apilar : %d\n",valor);
        return (pila + 1);
    }

};
/*
    int desapilar(int *pila, int *tope,int salida){

};
*/




int main (){

    int *datos = NULL;
    int capacidad = 0;
    int tope = 0;
    capacidad = 4;
    datos = calloc(2,capacidad);

    datos = apilar(datos,&capacidad,&tope,10);
    datos =apilar(datos,&capacidad,&tope,20);
    datos =apilar(datos,&capacidad,&tope,30);
    datos =apilar(datos,&capacidad,&tope,40);
    datos =apilar(datos,&capacidad,&tope,50);

    printf("capacidad inicial : %d, crece a : %d \n",4,capacidad);
    printf("tope : %d, capacidad %d \n",tope,capacidad);

    


    

    return 0;
}