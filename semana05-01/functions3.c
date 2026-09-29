#include <stdio.h>
//encontrar el numero mas largo
int largest(int a, int b, int c){
    int largest = 0;
    if(a > b){
        largest = a;
        if(c > a){
            largest = c;
        }
    }else{
        largest = b;
        if(c > b){
            largest = c;
        }
    }
    return largest;
}

//encontrar el numero mas pequeño
int smallest(int a, int b , int c){
    int smallest = 0;
    if(a < b){
        smallest = a;
        if(c < a){
            smallest = c;
        }
    }else{
        smallest = b;
        if(c < b){
            smallest = c;
        }
    }
    return smallest;
}

//en este main llamo a esas funciones
int main(){

    int a = 0,b=0,c= 0;
    printf("Ingrese numero 1 : ");
    scanf("%d",&a);
    printf("Ingrese numero 2 : ");
    scanf("%d",&b);
    printf("Ingrese numero 3 : ");
    scanf("%d",&c);

    printf("Entre los numeros que entraste : \n");
    printf("EL numero mas grande es :  %d \n ",largest(a,b,c));
    printf("EL numero mas pequenio es :  %d \n ",smallest(a,b,c));  



    return 0;
}