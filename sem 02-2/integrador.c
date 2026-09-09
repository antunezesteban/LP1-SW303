#include <stdio.h>

#define MAX_ESTUDIANTES 5


int main(){
    
    char nombre[50];
    float nota1, nota2, nota3, promedio;
    int i;

    for(i = 0; i < MAX_ESTUDIANTES;++i){

            printf("----Estudiante # %d \n", i + 1);

            while(getchar () != '\n'){
            }

            printf("Nombre : ");
            fgets(nombre, sizeof(nombre),stdin);

            for(int j = 0; (nombre[j] =! '\0'); ++j){

                if(nombre[j] == '\n'){
                    nombre[j] = '\0';
                    break;
                }

            }


            do{
                printf("Nota 1 (1-100) :  ");
                scanf("%f", &nota1);
            }while(nota1 < 0 || nota1 > 100);

            
            do{
                printf("Nota 2 (1-100) :  ");
                scanf("%f", &nota2);
            }while(nota2 < 0 || nota2 > 100);

            
            do{
                printf("Nota 3 (1-100) :  ");
                scanf("%f", &nota3);
            }while(nota3 < 0 || nota3 > 100);

            promedio = (nota1 + nota2 + nota3) / 3;

            char* estado;

            if(promedio >= 70){

                estado = "Aprobado";
            }else if(promedio >= 50){
                estado = "RECUPERACION";
            }else{
                estado = "REPROBADO";
            }

            printf(" RESULTADOS : ");
            printf("Nombre : %s \n", nombre);
            printf("Notas : %.1f , %.1f, %.1f \n", nota1, nota2, nota3);
            printf("Promedio : %.2f  \n", promedio);
            printf("Estado : %s \n ", estado);

            printf(" %s \n", (i < MAX_ESTUDIANTES- 1) ?" ----------------- " : " ==================== "  );
        
    } 

    printf("\n Proceso completado \n " );

    return 0;
}