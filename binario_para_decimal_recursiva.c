#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bin_para_dec (int *);

int main (void) {
    int num;
   
    printf ("Insira um numero em binario: ");
    scanf ("%d", &num);

    bin_para_dec (&num);

    printf ("Numero em decimal: %d", num);

    return 0;
}

void bin_para_dec (int *n) {
    int i = 0, resultado = 0;

    while (*n > 0) {
        resultado += (*n % 10) * pow (2, i++);
        *n /= 10;
    }

    *n = resultado;
}
