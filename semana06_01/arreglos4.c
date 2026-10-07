#include <stdio.h>
#define RESPONSES_SIZE 20
#define Frequency_size 6



int main(void){

    int responses[RESPONSES_SIZE] = {1,2,5,4,3,5,2,1,3,1,4,3,3,3,2,3,3,2,2,5};
    
    
    int frecuency[Frequency_size] = {0};

    for(size_t answer = 0; answer < RESPONSES_SIZE;++answer){
        ++frecuency[responses[answer]];
    }

    //mostrar resultados}
    printf("%s%12s","Rating","Frecuencia");

    for(size_t rating = 1;rating <Frequency_size;++rating){
        printf("%6zu%12d\n",rating, frecuency[rating]);
    }

    return 0;
}