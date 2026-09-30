#include int main (){
int iteraciones = 0;
float tolerancia = 0.000001;
float suma = 0;
float esperado = 0.693147;
int signo

while(suma - esperado != tolerancia){
float termino = 1/iteraciones;

suma += termino*signo;
iteraciones ++;
}




return 0;
}