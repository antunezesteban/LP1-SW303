#include <stdio.h>

int main(void){

    FILE *archivo;


    archivo = fopen("estudiantes.txt","w");

    if(archivo == NULL){
        printf("Error no se encontro el archivo\n");
        return 1;
    }
    
    fprintf(archivo,"001,Juan,18\n");
    fprintf(archivo,"002,Luis,12\n");
    fprintf(archivo,"003,Lock,26\n");

    fclose(archivo);

    printf("El archivo se creo correctamente");

    return 0;
}