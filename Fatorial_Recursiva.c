// !!

#include <stdio.h>

int fatorial (int);

int main (void) {
    int n;

    printf ("Insira o numero: ");
    scanf ("%d", &n);

    printf ("%d! = %d", n, fatorial (n));

    return 0;
}

int fatorial (int n) {
    int resultado;

    if (n == 0) {
        return 1;
    }
    else {
        resultado = n * fatorial (n - 1);
    }

    return resultado;
}