// Escreva uma função que receba uma matriz A bidimensional de valores reais e um valor
// real x, e multiplique todos os elementos de A por x.

#include <stdio.h>
#include <time.h>
#include <time.h>

void ImprimeMatriz (int, int, const float [] [*]);
void MultiplicaMatriz (float, int, int, float [] [*]);
void MatrizAleatoria (int, int, float [] [*]);

int main (void) {
    float x;
    int linhas, colunas, i, j;

    srand (time (NULL));

    printf ("insira o numero de linhas e colunas da matriz: ");
    scanf ("%d %d", &linhas, &colunas);

    float M [linhas] [colunas];

    printf ("Insira o numero que vai multiplicar a matriz inteira: ");
    scanf ("%f", &x);

    MatrizAleatoria (linhas, colunas, M);

    printf ("Matriz antes da multiplicacao:\n");
    ImprimeMatriz (linhas, colunas, M);
    
    MultiplicaMatriz (x, linhas, colunas, M);

    printf ("Matriz apos a multiplicacao:\n");
    ImprimeMatriz (linhas, colunas, M);

    return 0;
}

void ImprimeMatriz (int linhas, int colunas, const float M [linhas] [colunas]) {
    int i, j;

    printf ("\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf ("%8.1f", M [i] [j]);
        }
        printf ("\n");
    }
    printf ("\n");
}
    

void MatrizAleatoria (int linhas, int colunas, float M [linhas] [colunas]) {
    int i, j;

    for (i = 0; i < linhas; i++) {
            for (j = 0; j < colunas; j++) {
                M [i] [j] = rand () % 100;
            }
        }
}

void MultiplicaMatriz (float x, int linhas, int colunas, float M [linhas] [colunas]) {
    int i, j;

    for (i = 0; i < linhas; i++) {
            for (j = 0; j < colunas; j++) {
                M [i] [j] *= x;
            }
        }
}