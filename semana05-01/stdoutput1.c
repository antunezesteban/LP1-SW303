#include <stdio.h>
int main(){

    char filename[100];

    printf("Ingresa la direccion : ");
    scanf("%99s", filename);

    FILE *file_ptr = fopen(filename, "r");

    if(filename == NULL){
        fprintf(stderr, "Error no se encontro archivo %s : \n",filename);
        return 1;
    }

    printf("Se logro encontrar el archivo %s \n",filename);
    fclose(file_ptr);
    return 0;
}