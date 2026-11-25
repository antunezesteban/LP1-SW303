#include <stdio.h>

int main(void){

    FILE *archivo;
    char linea[100];

    archivo = fopen("mensaje.txt","w");

    if(archivo == NULL){
        printf("Error al abrir archivo .\n");
        return 1;
    }

    fputs("Programacion de lenguaje C\n",archivo);
    fputs("ESte es un intento \n",archivo);

    fclose(archivo);

    archivo = fopen("mensje.txt0","r");

    if(archivo == NULL){
        return 1;
    }

    while(fgets(linea,sizeof(linea),archivo) != NULL){
        printf("%s",linea);
    }

    fclose(archivo);

    return 0;
}