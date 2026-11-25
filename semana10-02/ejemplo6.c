#include <stdio.h>

int main(void){

    FILE *archivo;
    char linea[100];

    archivo = fopen("datos.txt","r+");

    if(archivo == NULL){
        printf("Error no se encontro el archivo \n");
        return 1;
    }

    fgets(linea,sizeof(linea),archivo);

    printf("Contenido original: %s \n",linea);

    //posiiconarse al inicio
    fseek(archivo,0,SEEK_SET);

    //sobreescribir el archivo
    fprintf(archivo,"XYZ");

    fclose(archivo);

    return 0;

}