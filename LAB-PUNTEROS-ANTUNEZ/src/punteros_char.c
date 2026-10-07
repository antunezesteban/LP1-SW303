#include <stdio.h>

int main(void){

    //a)
    char *s = "Hola, mundo";

    //b)
    int i = 0;
    while(*(s + i) != '\0'){
        putchar(*(s + i));
        ++i;
    }

    //c)
    printf("\nLa cantidad de caracteres es : %d", i);

        /*
       a) ¿Cuál es la diferencia entre char *s = "..." y char s[] = "..." en términos de
        memoria?
        -
        b) ¿Por qué intentar modificar un literal de cadena es comportamiento no
        definido?
        -
        c) ¿Cuándo conviene cada declaración?
        */

    return 0;
}