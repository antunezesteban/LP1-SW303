#include <stdio.h>

int main(void){

    FILE *archivo;
    char linea[100];

    archivo = fopen("estudiantes.txt","r+");

    if(archivo == NULL){
        printf("Error no se encontro archivo \n");
        return 0;
    }

    while(fgets(linea,sizeof(linea), archivo) != NULL){
        printf("%s",linea);
    }

    //Se posiciona en  el fin de el archivo
    fseek(archivo,0,SEEK_END);

    //Escribir al final
    fprintf(archivo,"007,James,18");
    fprintf(archivo,"007,Bond,81");

    fclose(archivo);



    return 0;
}