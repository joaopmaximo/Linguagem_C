#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) {
    int i, tam;

    printf ("Tamanho do vetor: ");
    scanf ("%d", &tam);
 
    if (tam < 1) {
        return 0;
    }

    int vetor [tam];

    for (i = 0; i < tam; i++) {
        printf ("Vetor [%d]: ", i);
        scanf ("%d", &vetor [i]);
    }

    return 0;
}