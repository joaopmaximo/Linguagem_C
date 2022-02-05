#include <stdio.h>
#include <math.h>

int main (void) {
    int n, resultado = 0, i = 0;

    printf ("Insira o numero em binario: ");
    scanf ("%d", &n);

    while (n >= 1) {
        resultado += (n % 10) * pow (2, i);
        i++;
        n = n / 10;
    }

    printf ("Em decimal: %d", resultado);

    return 0;
}