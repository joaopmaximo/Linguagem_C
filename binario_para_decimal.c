#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bin_para_dec (int *);

int main (void) {
    int num;
   
    printf ("insira um numero em binario: ");
    scanf ("%d", &num);

    bin_para_dec (&num);

    printf ("numero em decimal: %d", num);

    return 0;
}

void bin_para_dec (int *n) {
    int i = 0, aux, resultado = 0;

    while (*n > 0) {
        aux = (*n % 10) * pow (2, i++);
        *n /= 10;
        resultado += aux;
    }

    *n = resultado;
}
