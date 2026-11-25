#include <stdio.h>

int main(void){

    FILE *archivo;
    long tamano;

    archivo = fopen("datos.txt","r");

    if(archivo == NULL){
        printf("Error al abrir archivo \n");
        return 1;
    }

    fseek(archivo,0,SEEK_END);

    tamano = ftell(archivo);

    printf("tamaño del archivo %ld bytes\n",tamano);
    fclose(archivo);

    return 0;
}