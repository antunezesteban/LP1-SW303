#include
int main (){
int n;
printf("Ingrese un n: ");
scanf("%d", &n);

for(int i = 1 ; i <= n ; i++){
for(int j = 1; j <= i ; j++){
printf("%d ",j);
}
printf("\n");

}
int a = n;
for (int j=0; j for(int i = 1 ; i <= a ; i++){
printf("%d ",i);
}
a--;
printf("\n");
}


return 0;
}