#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void dec_para_bin (int *);

int main (void) {
    int num;

    printf ("Insira um numero decimal: ");
    scanf ("%d", &num);

    dec_para_bin (&num);

    printf ("Numero em binario: %d", num);

    return 0;
}

void dec_para_bin (int *n) {
    int aux [100], i = 0, j;

    while (*n > 0) {
        aux [i] = *n % 2;
        printf ("aux [%d] = %d\n", i, aux [i]);
        *n = *n / 2;
        i++;
    }

    printf ("i = %d\n", i);

    for (j = i - 1; j >= 0; j--) {
        *n += aux [j] * pow (10, j);
    }

    printf ("*n = %d\n", *n);
}