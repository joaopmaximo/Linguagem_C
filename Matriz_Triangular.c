// Escreva uma funcao que receba como parametro uma matriz quadrada de ordem n de
// inteiros e devolve verdadeiro se ela e uma matriz triangular superior, ou falso, caso
// contrario. Matriz triangular superior é uma matriz onde todos os elementos de posicoes
// acima da diagonal principal sao diferentes de 0 e os demais elementos sao iguais a 0.

#include <stdio.h>
#include <stdbool.h>

bool Triangular (int, const int [] [*]);

void ImprimeMatriz (int, const int [] [*]);

int main (void) {
    int n, i, j;

    printf ("Insira a ordem da matriz quadrada: ");
    scanf ("%d", &n);

    int M [n] [n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf ("M [%d] [%d] = ", i + 1, j + 1);
            scanf ("%d", &M [i] [j]);
        }
    }

    ImprimeMatriz (n, M);

    if (Triangular (n, M)) {
        printf ("A matriz e triangular");
    }
    else {
        printf ("A matriz nao e triangular");
    }

    return 0;
}

void ImprimeMatriz (int n, const int M [n] [n]) {
    int i, j;

    printf ("\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf ("%8d", M [i] [j]);
        }
        printf ("\n");
    }
    printf ("\n");
}

bool Triangular (int n, const int M [n] [n]) {
    int i = 0, j = 0;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j > i || j == i) {
                if (M [i] [j] == 0) {
                    return false;
                }
            }
            else {
                if (M [i] [j] != 0) {
                    return false;
                }
            }
        }

        return true;
    }
    
}