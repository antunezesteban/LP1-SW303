#include <stdio.h>

int main(void){

    int v [8] = {10,20,30,40,50,60,70,80};
    int *p = v;

    //c)
    printf("*p\t = %d\n",*p);
    printf("*(p + 1) = %d\n",*(p + 1));
    printf("*(p + 7) = %d\n",*(p + 7));
    printf("p[3] = %d\n",p[3]);
    printf("3[p] = %d\n",3[p]);
    printf("(p+ 5) - p = %lld\n",(p+ 5) - p);
    printf("siszeof(int) = %lld\n",sizeof(int));

    //d)
    //recorrido de v con puntero p
    int sum = 0;
    printf("Recorrido hacia adelante : \n");
    for(int i = 0; i < (int)( sizeof(v) / sizeof(v[0]));++i){
        printf("%d  ",*(p + i));
        sum += *(p + i);
    }
    printf("\nsuma = %d\n",sum);

    //e)
    //arreglo en reversa recorrido con puntero q
    int *q = &v[7];
    printf("Arreglo en reversa :\n");
    for(int i = 0 ;i < (int)( sizeof(v) / sizeof(v[0]));++i){
        printf("%d  ",*(q - i));
    }

    /*
    a) Concepto clave: p + 5 no suma 5 bytes, suma 5 * sizeof(int) bytes.
    Verifíquenlo imprimiendo (char *)p y (char *)(p+5) y calculando la diferencia
    en bytes con (char *)(p+5) - (char *)p.
    -

    b) ¿Por qué p[i] es exactamente *(p + i)? ¿Qué dice el estándar C al respecto?

    c) ¿Por qué 3[p] compila? Explicar la conmutatividad de + y la definición de [].

    d) Trampa: ¿qué pasa con p + 8 (uno más allá del último elemento)? ¿Es válido
    crearlo? ¿Se puede desreferenciar?
*/
    return 0;
}
