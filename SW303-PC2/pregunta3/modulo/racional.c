#include "racional.h"
#include <stdio.h>


static int es_primo(int n){
    if (n < 2) {
        return 0;            
    }
    if (n == 2) {
        return 1;            
    }
    if (n % 2 == 0) {
        return 0;           
    }

   
    for (int i = 3; i <= n / i; i += 2) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int mcd(int a, int b) {
    if (b == 0) {
        return (a < 0) ? -a : a;  
    }
    return mcd(b, a % b);
}


void simplificar(int *num, int *den) {
    if (*den == 0) {
        printf("Error: denominador igual a cero\n");
        return;
    }

    int divisor = mcd(*num, *den);
    *num /= divisor;
    *den /= divisor;

    
    if (*den < 0) {
        *num = -(*num);
        *den = -(*den);
    }
}


void sumar(int n1, int d1, int n2, int d2, int *n_res, int *d_res) {
    *n_res = n1 * d2 + n2 * d1;
    *d_res = d1 * d2;
    simplificar(n_res, d_res);
}



#include <stdio.h>


