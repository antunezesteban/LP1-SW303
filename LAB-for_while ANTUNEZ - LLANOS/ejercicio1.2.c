#include <stdio.h>
 

void semilla(int n){
    static int cont = 0;
    int resultado = n;
    while(resultado != 1 ){
        if(resultado % 2 == 0){
            ++cont;
            resultado = resultado/2;
        }else{
            ++cont;
            resultado = 3*resultado + 1;
        }
    }
    

    printf("Mayor semilla entre 1 y 10000 : n = %d , semilla = %d", n,cont);
    
}

int main(){

    int semi = 0;

    printf("Ingrese n : ");
    scanf("%d",&semi);

    semilla(semi);
    

    return 0;
}