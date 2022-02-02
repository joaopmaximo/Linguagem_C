#include <stdio.h>
#include <time.h>

void ImprimeMatriz (int, int, int [] [*]);

int main (void) {
    int i, j, linha, coluna;

    // Definindo a semente da função rand para a função time
    srand (time (NULL));

    printf ("Insira a quantidade de linhas e colunas da matriz: ");
    scanf ("%d %d", &linha, &coluna);

    int M [linha] [coluna];

    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            M [i] [j] = rand () % 100;
        }
    }

    printf ("\n");

    ImprimeMatriz (linha, coluna, M);

    printf ("\n");

    return 0;
}

void ImprimeMatriz (int linha, int coluna, int M [linha] [coluna]) {
    int i, j;

    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            printf ("%8d", M [i] [j]);
        }
        printf ("\n");
    }
}