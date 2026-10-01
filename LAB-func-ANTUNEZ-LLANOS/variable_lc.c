#include <stdio.h>

int incrementar(int contador) { 
    return contador + 1; }
int main(void) {
    int contador = 0;

contador = incrementar(contador);
contador = incrementar(contador);
contador = incrementar(contador);

 printf("global contador = %d\n", contador);
 return 0;
}
