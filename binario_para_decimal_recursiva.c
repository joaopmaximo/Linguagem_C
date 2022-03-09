#include <stdio.h>
#include <math.h>

int conversao (int, int);

int main (void) {
    int n, resultado = 0, i = 0;

    printf ("Insira um numero em binario: ");
    scanf ("%d", &n);

    printf ("Em decimal: %d", conversao (n, i));

    return 0;
}

int conversao (int n, int i) {
    int resultado;

    printf ("i = %d\n", i);

    if (n >= 1) {
        resultado = (n % 10) * pow (2, i);
        return resultado + conversao (n / 10, i + 1);
    }
    
    return 0;
}