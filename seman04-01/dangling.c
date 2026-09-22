

#include <stdio.h>
int main(void) {
 int a = 1, b = 2;

    if (a > 0) {
        if (b > 0) {
            puts("Ambos positivos (claro)\n");
        }
    } else {
        printf("a no es positivo\n");
    }
 return 0;
}