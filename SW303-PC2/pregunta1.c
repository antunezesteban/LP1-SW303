#include <stdio.h>

int gx = 100;

void funcionA(){

    int x = 10;
    static int y = 5;
    ++x;
    ++y;
    printf("A : x = %d, y =%d,global = %d,\n",x,y, gx);
}

void funcionB(){
    static int y = 0;
    gx++;
    y++;
    printf("B : x = %d(global),y = %d\n",gx,y);

}

int main(void){
    
    funcionA();
    funcionA();
    funcionB();
    funcionA();
    funcionB();
    return 0;

}