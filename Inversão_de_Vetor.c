#include <stdio.h>

void Inverte_Vetor (int, int []);

int main (void) {
    int n;

    printf ("Informe o tamanho do vetor: ");
    scanf ("%d", &n);

    int a [n];

    for (int i = 0; i < n; i++) {
        printf ("%d elemento: ", i+1);
        scanf ("%d", &a [i]);
    }

    Inverte_Vetor (n, a);

    printf ("Vetor invertido: ");
    for (int i = 0; i < n; i++) {
        printf ("%d ", a [i]);
    }

    return 0;
}

void Inverte_Vetor (int n, int a []) {
    int aux;

    for (int i = 0; i < n / 2; i++) {
        aux = a [i];
        a [i] = a [(n - 1) - i];
        a [(n - 1) - i] = aux;
    }
}