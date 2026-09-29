#include <stdio.h>

int main(){

    char c;
    for(;;){

        c = getchar();
        if( c == 'q'){

            printf("Se termino la lectura : ");
            break;
        }else{
            if(c != 10){
                printf("Se presiono la tecla:%c\n",c);
            }
            
        }

    }


    return 0;
}