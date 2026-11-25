#include <stdio.h>

int main(void){
    FILE *gordis;
    char linea[100];

    gordis = fopen("datos.txt","r");

    if(gordis == NULL){
        printf("Error no se encontro el archivo \n");
        return 1;
    }

    while(fgets(linea,sizeof(linea),gordis) != NULL){
        printf("%s",linea);
    }

    fclose(gordis);
    
    return 0;
}