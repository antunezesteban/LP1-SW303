#include <stdio.h>

int main(){

    int num = 115;

    if(num & 1 << 5){
        printf("El bit 5 esta activo o en uso");
    }


    return 0;
}