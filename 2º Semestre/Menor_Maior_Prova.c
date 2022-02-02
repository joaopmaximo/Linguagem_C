#include <stdio.h>
#include <stdlib.h>

void prova (int, float [], float, float, int *, int *, int *);

int main (void) {
    int i, tam, menores = 0, maiores = 0, na_faixa = 0;;
    float menor, maior;

    printf ("Insira o tamanho do vetor: ");
    scanf ("%d", &tam);

    float v [tam];

    printf ("Insira os elementos do vetor:\n");
    for (i = 0; i < tam; i++) {
        scanf ("%f", &v [i]);
    }

    printf ("Insira o menor e maior valor: ");
    scanf ("%f %f", &menor, &maior);

    prova (tam, v, menor, maior, &menores, &na_faixa, &maiores);

    printf ("menores: %d\n", menores);
    printf ("Na_faixa: %d\n", na_faixa);
    printf ("Maiores: %d\n", maiores);

    return 0;
}

void prova (int tam, float v [], float menor, float maior, int *menores, int *na_faixa, int *maiores) {
    int i;

    for (i = 0; i < tam; i++) {
        if (v [i] < menor) {
            *menores = *menores + 1;
        }
        if (v [i] > maior) {
            *maiores = *maiores + 1;
        }
        if (v [i] >= menor && v [i] <= maior) {
            *na_faixa = *na_faixa + 1;
        }
    }
}