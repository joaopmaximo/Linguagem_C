#include <stdio.h>

void zerodez (int, int, int *);

int main(void) {
    int linhas, colunas, i, j, x;

    scanf ("%d", &x);
    printf ("Numero: %d", x);
    scanf ("%d %d", &linhas, &colunas);

    int M [linhas] [colunas];

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            scanf ("%d", &M [linhas] [colunas]);
        }
    }

    zerodez (linhas, colunas, *M);

    return 0;
}

void zerodez (int x, int y, int *matriz) {
    if ((*matriz > 10) && (*matriz < 0)) {
        printf ("FALSO");
    }
    else {
        printf ("VERDADEIRO");
    }
}