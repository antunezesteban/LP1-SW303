#include <stdio.h>
unsigned int contar_unos(unsigned int n) {
 int cuenta = 0;
 while (n) {
 n &= (n - 1);
 cuenta++;
 }
 return cuenta;
}

int main(void){

    int n= 20;

    contar_unos(n);


    return 0;
}