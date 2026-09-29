#include <stdio.h>

#define ANIO_ACTUAL 2027;

#ifndef __linux__
#define __SO__"Windows"
#else
#define __SO__"Linux"
#endif

//zona de prototipos;
void saludar();
int devolver_anio_actual();

//funcion principal main
int main(){

    saludar();//toda funcion declarada o definida

    return 0;
}


//zona de definiciones
//parametros ninguno

void saludar(){
    printf("Este es el curso SW303 y el anio %d", devolver_anio_actual());

}

int devolver_anio_actual(){
    return 2026;
}