#include <stdio.h>
#include <string.h>

int main(){

    char cadena1[] = "Manzana";
    char cadena2[] = "Mandarina";
    char cadena3[] = "Manzana";
    //strcmp compara todo
    if(strcmp(cadena1 ,cadena3) == 0){
        printf("strcmp : cadena1 y cadena3 son iguales\n");
    }

    if(strcmp(cadena1,cadena2) != 0){
        printf("strcmp : cadena1 y cadena 2 son diferentes\n");
    }

    if(strncmp(cadena1, cadena2, 3) ==0){
        printf("strncmp : cadena 1 y cadena 2 los primeros tres caracteres son iguales");
    }
    return 0;
}