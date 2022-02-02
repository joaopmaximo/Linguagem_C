#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(void){
    int linhas, colunas, i, j;
    int lm, cm;

    scanf ("%d", &linhas);
    scanf ("%d", &colunas);

    int m [linhas] [colunas];

    scanf ("%d", m [0] [0]);

    for (i = 1; i <= linhas; i++) {
        for (j = 1; j <= colunas; j++) {
            scanf ("%d", &m [i] [j]);
            if (m [i - 1] [j - 1] > m [i] [j]) {
                lm = i;
                cm = j;
            }
        }
    }

    printf ("Linha maior: %d", lm);
    printf ("coluna maior: %d", cm);
    
    return 0;
}
