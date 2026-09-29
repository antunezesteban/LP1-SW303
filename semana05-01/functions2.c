#include <stdio.h>
int a = 0,b = 0;

void suma(void){
    
    printf("Ingrese el primer numero : ");
    scanf("%d",&a);
    printf("Ingrese segundo numero : ");
    scanf("%d",&b);
    
    printf("Suma : %d + %d = %d\n",a ,b,a + b);
}

void diferencia(void){

    printf("Ingrese el primer numero : ");
    scanf("%d",&a);
    printf("Ingrese segundo numero : ");
    scanf("%d",&b);
    
    printf("Diferencia : %d - %d = %d\n",a ,b,a - b);

}

void multi(void){
    
    printf("Ingrese el primer numero : ");
    scanf("%d",&a);
    printf("Ingrese segundo numero : ");
    scanf("%d",&b);
    
    printf("Multiplicacion : %d * %d = %d \n",a ,b,a * b);
}


int main(){

    int choice = 0; 

    do{
        printf("Seleccione la opcion:\n");
        printf("1.Suma\n");
        printf("2.Diferencia\n");
        printf("3.Multiplicacion\n");
        printf("Ingrese numero negativo para terminar programa.\n");
        printf("Seleccione : \n");
        scanf("%d",&choice);

        if(choice < 0){
            printf("El programa a acabado : ");
        }else if(choice == 1){
            suma();
        }else if(choice == 2){
            diferencia();
        }else if(choice == 3){
           multi();
        }else{
            printf("numero invalido.");
        }

    }while(choice > 0);


    return 0;
}