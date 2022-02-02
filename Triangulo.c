#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void triangulo (int, char);

main (void) {
    char carac;
    int base;

    printf ("Insira o caractere: ");
    scanf ("%c", &carac);

    printf ("Insira a base: ");
    scanf ("%d", &base);

    printf ("\n");
    
    triangulo (base, carac);

    return 0;
}

void triangulo (int n, char ch) {
    int i, j, k;

    //Imprime o triângulo.
    for (i = 0; i <= (n / 2); i++) {
        for (j = 0; j < n - (i + i); j++) {
            printf ("%c", ch);
        }
        printf ("\n");
        for (k = 0; k <= i; k++) {
            printf (" ");
        }
    }
}