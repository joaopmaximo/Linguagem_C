// Implemente uma função para multiplicar uma matriz A n x m por uma matriz B m x k e resulta
// em uma matriz C n x k que tem o seguinte protótipo:

#include <stdio.h>

void mult_mat (int, int, int, int [] [*], int [] [*], int [] [*]);
void ImprimeMatriz (int, int, const int [] [*]);

int main (void) {
    int i, j, n, m, k;

    printf ("Insira os valores de n, m e k: ");
    scanf ("%d %d %d", &n, &m, &k);

    // Inicializando as matrizes
    int A [n] [m], B [m] [k], C [n] [k];

    printf ("Insira os elementos da matriz A:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf ("%d", &A [i] [j]);
        }
    }

    printf ("Insira os elementos da matriz B:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < k; j++) {
            scanf ("%d", &B [i] [j]);
        }
    }

    printf ("Matriz A:\n");
    ImprimeMatriz (n, m, A);

    printf ("Matriz B:\n");
    ImprimeMatriz (m, k, B);

    mult_mat (n, m, k, A, B, C);

    printf ("Matriz C:\n");
    ImprimeMatriz (n, k, C);

    return 0;
}

void mult_mat (int n, int m, int k, int A [n] [m], int B [m] [k], int C [n] [k]) {
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < k; j++) {
            C [i] [j] = (A [i] [j] * B [i] [j]) + (A [i] [j + 1] * B [i + 1] [j]);
        }
    }
}

void ImprimeMatriz (int linhas, int colunas, const int M [linhas] [colunas]) {
    int i, j;

    printf ("\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf ("%8d", M [i] [j]);
        }
        printf ("\n");
    }
    printf ("\n");
}