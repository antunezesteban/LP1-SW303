#include <stdio.h>
#include <string.h>


int main(){

    char destino[90];
    char destino2[12];
    printf("La linea inicial : %s\n",destino);
    strcpy(destino,"Hola mundo");     //strcpy puede serpeligroso si el tamaño dela linea sobrepasa el tamaño del char
    
    printf("La linea despues de strcpy : %s\n",destino);

    //es mejor y mas seguro usar strncpy

    strncpy(destino2,"Hola    amigos mios",11);

    //agregra manuealmente '\0'

    destino2[11] = '\0';

    printf("La linea 2 despues de strncpy %s\n",destino2);

    return 0;
}