#include<stdio.h>

// devuelve la suma de los digitos de n
int suma_digitos(int n){

    int resultado = 0;
    int temp = n;
    while(temp > 0){
        int dig = temp % 10;
        resultado += dig;
        temp /= 10;
    }
    return resultado;

};
// aplica suma_digitos hasta obtener un digito
int raiz_digital(int n){

    if(n == 0){
        return 0;
    }
    while( n >= 10){
        n = suma_digitos(n);
    }
    return 0;
};
// imprime la traza "9875 -> 29 -> 11 -> 2"
void imprimir_traza(int n){
    printf("%d",n);
    int final = 0;
    while(n >= 10){
        n = suma_digitos(n);
        final = n;
        printf("-->%d",n);
    }
    printf("\n");
    printf("el numero de raiz es : %d",final);
}; 

int main(){

    int n;
    printf("Ingrese un numero n : ");
    scanf("%d", &n);

    raiz_digital(n);
    imprimir_traza(n);


    return 0;
}