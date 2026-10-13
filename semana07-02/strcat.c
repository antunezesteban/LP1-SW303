#include <stdio.h>

#include <string.h>

int main(){

    //hay dos strcat que es un poco peligroso porque si el buffer dstino no
    // tiene espacio suficiente para acomodar lo que añades se puede corromper el espacio
    char saludo[20] = "Hola ";
    char nombre[] = "Carlos Alberto";

    // si quiero saber el espacio restante es 20 - strlen(saludo) - 1 por el '\0' = 14
    strncat(saludo,nombre,14);
    //el strncat me pone automaticamente el \0 all final
    printf("Resultado = %s\n",saludo);
    return 0;
}