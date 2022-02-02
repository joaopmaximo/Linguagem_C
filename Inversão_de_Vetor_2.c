#include <stdio.h>

void Inverte (int, int []);

int main (void) {
    int i, n;

    printf ("Insira o tamanho do vetor: ");
    scanf ("%d", &n);

    int V [n];

    for (i = 0; i < n; i++) {
        printf ("V [%d] = ", i + 1);
        scanf ("%d", &V [i]);
    }

    for (i = 0; i < n; i++) {
        printf ("%5d", V [i]);
    }

    printf ("\n");

    Inverte (n, V);

    return 0;
}

void Inverte (int n, int V []) {
    int i, aux;

    for (i = 0; i < (n / 2); i++) {
        aux = V [i];
        V [i] = V [n - (i + 1)];
        V [n - (i + 1)] = aux;
    }

    for (i = 0; i < n; i++) {
        printf ("%5d", V [i]);
    }
}