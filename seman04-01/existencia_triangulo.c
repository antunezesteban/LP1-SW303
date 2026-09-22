#include <stdio.h>

void clasificartriangulo(double a, double b, double c){

    if(a <= 0 || b <= 0|| c <= 0){
        printf("lados invalidos");
    }else if(a + b <= c || a + c <= b || b + c <= a){
        printf("no forman triangulo");
    }else if(a == b && b == c){
        printf ("triangulo equilatero");
    }else if(a == b || b == c || c == a){
        printf("isoceles");
    }else{
        printf("escaleno");     
    }
};

int main(void){

    double a = 0,b = 0,c = 0;
    printf("Ingrese valores a b y c : ");
    scanf("%lf" , &a );
    scanf("%lf ", &b);   
    scanf("%lf", &c);
    
    clasificartriangulo(a,b,c);

}