#include <stdio.h>
int main(){
    
    int datos[10];
    int suma=0;
    int pares=0;
    int impares=0;
    double promedio;
    int min, max;
    int maxin;  
    int aux;
    int minin;
    for(int i=0;i<10;i++){
      scanf("%d",&datos[i]);  
      suma+=datos[i];
      if(datos[i]%2==0){
        pares++;
      } else{ impares++;}
      //min y max
      if(i==0){ max=datos[i]; min=datos[i]; minin=i;maxin=i;}
      else{ if(datos[i]>max){ max=datos[i]; maxin=i;}
            if(datos[i]<min){ min=datos[i]; minin=i;}   
    }
    }
    promedio= suma/10;

    
 //inversion
    for(int k=0;k<5;k++){
     aux=datos[k];
     datos[k]=datos[9-k];
     datos[9-k]=aux;
    }
    //encontrar minin y maxin
    






    printf("\nSuma: %d",suma);
    printf("\nPromedio %f",promedio);
    printf("\nMinimo: %d (indice %d)",min,minin);
    printf("\nMaximo: %d (indice %d)",max,maxin);
    printf("\nPares: %d",pares);
    printf("\nImpares: %d",impares);
    printf("\nOriginal: ");
        for(int i=10; i>0;i--){
          if(i!=1){  printf("%d, ",datos[i-1]);
        } else { printf("%d\n",datos[i-1]);}
    }
    
    printf("\nInvertido: ");
    for(int j=0;j<10;j++){
        if(j!=9){
        printf("%d, ",datos[j]);
        }else{ printf("%d, ",datos[j]);}
    }

    return 0;
}