#include <stdio.h>
int incrementar(int &x) {
x = x + 1;
printf("Dentro de incrementar: x = %d\n", x);
}

int main(void) {
int n = 10;
incrementar(n);
printf("Despues de llamar: n = %d\n", n); // ¿10 o1?
return 0 ;
}



//No cambia porque la funcion incrementar no accede a la direccion de memoria de n y solo cambia el valor dentro de incrementar
//en lugar de una funcion void un la funcion que retorne el valor cambiado, modificar n dentro del main

int incrementar(int x) {
return x + 1;

}

int main(void) {
int n = 10;
n = incrementar(n);
printf("Despues de llamar: n = %d\n",n );
return 0 ;
}