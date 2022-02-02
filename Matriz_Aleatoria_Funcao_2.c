#include <stdio.h>
#include <time.h>

void ImprimeMatriz (int, int, const int [] [*]);
void MatrizAleatoria (int, int, int [] [*]);

int main (void) {
    int linhas, colunas;

    printf ("Insira o numero de linhas e colunas: ");
    scanf ("%d %d", &linhas, &colunas);

    int M [linhas] [colunas];

    MatrizAleatoria (linhas, colunas, M);
    ImprimeMatriz (linhas, colunas, M);

    return 0;
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
    

void MatrizAleatoria (int linhas, int colunas, int M [linhas] [colunas]) {
    int i, j;

    srand (time (NULL));

    for (i = 0; i < linhas; i++) {
            for (j = 0; j < colunas; j++) {
                M [i] [j] = rand () % 100;
            }
        }
}