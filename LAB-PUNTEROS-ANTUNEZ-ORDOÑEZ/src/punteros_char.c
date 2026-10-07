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
        Preguntas guia
       a) ¿Cuál es la diferencia entre char *s = "..." y char s[] = "..." en términos de
        memoria?
        -el char *s , es un puntero que guarda la direccion de memoria de la cadena de texto,
         en cuanto al char s[], este crea un arreglo en memoria stack con tamaño exacto para almacenar la cadena
        b) ¿Por qué intentar modificar un literal de cadena es comportamiento no
        definido?
        -es debido al diseño de sistemas operativos y compiladores,los compiladores colocan los literales de cadena en modo read only,
         si intentas escribir el sistema operatico interciene y suelta error.
        c) ¿Cuándo conviene cada declaración?
        Cuando necesitas modificar, rescribir o tokenizar , usa char s[].
        Cuando solo neceesitas leer cadenas puedes utilizar char *s .
        */

    return 0;
}