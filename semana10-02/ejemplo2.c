#include <stdio.h>

int main(void){
    FILE *archivito;
    int caracter;

    archivito = fopen("numeros.txt","r");
    if(archivito == NULL){
        printf("Error no se encontro archivo\n");
        return 1;
    }

    while((caracter = fgetc(archivito)) != EOF){
        putchar(caracter);
    }

    fclose(archivito);


    return 0;
}