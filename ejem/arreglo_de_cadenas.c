#include<stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){

    int n = -1;
    do{
        printf("Cantida de cadena <= 10 : ");
        if(scanf("%d",&n) != 1){
            int ch;
            while((ch = getchar()) != '\n' && ch != EOF){
            }
            n = -1;
        }
    }while(n > 10 || n < 0);

    int ch;
    while((ch = getchar()) != '\n' && ch != EOF){

    }

    char **lineas_tn = malloc(n * sizeof(char*) );

    if(lineas_tn == NULL){
        return 1;
    }

    for(int i = 0; i < n;++i){
        char base[100];

        printf("Cadena %d : ",i + 1);

        if(fgets(base,sizeof(base),stdin) == NULL){
                base[0] = '\0';
        }

        base[strcspn(base,"\n")] = '\0';

        lineas_tn[i] = malloc(strlen(base) + 1);

        if(lineas_tn[i] == NULL){
            return 1;
        }

        strcpy(lineas_tn[i],base);
    }


    char *ptr = lineas_tn[0];
    for(int i = 0; i < n;++i){
        printf("Linea [%d] @ (%p) : %s (%ld)\n",i + 1,ptr,lineas_tn[i],strlen(lineas_tn[i]));
    }

    for(int i = 0; i < n;++i){
        free(lineas_tn[i]);
    }
    free(lineas_tn);

    


    return 0;
}