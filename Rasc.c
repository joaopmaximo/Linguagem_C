#include <stdio.h>
#include <math.h>

int conversao (int, int);

int main (void) {
    int n, resultado = 0, i = 0;

    printf ("Insira um numero em binario: ");
    scanf ("%d", &n);

/*
    while (n >= 1) {
        resultado += (n % 10) * pow (2, i++);
        n = n / 10;
    }
*/

    printf ("Em decimal: %d", conversao (n, i));
    //printf ("Em decimal: %d", resultado);

    return 0;
}

int conversao (int n, int i) {
    int resultado;

    if (n > 0) {
        resultado = (n % 10) * pow (2, i);
        return resultado + conversao (n / 10, i + 1);
    }

    return resultado;
}