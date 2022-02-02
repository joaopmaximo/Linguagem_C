#include <stdio.h>

int main(void) {
    int quantidade, i, j;;

    printf ("Quantidade de alunos: ");
    scanf ("%d", &quantidade);

    float notas [quantidade] [3];
    float media [quantidade];

    for (i = 0; i < quantidade; i++) {
        printf ("Aluno %d:\n", i + 1);
        for (j = 0; j < 3; j++) {
            scanf ("%f", &notas [i] [j]);
            if (j == 0) {
                notas [i] [j] = notas [i] [j] * 0.2;
            }
            else {
                if (j == 1) {
                    notas [i] [j] = notas [i] [j] * 0.3;
                }
                else {
                    if (j == 2) {
                        notas [i] [j] = notas [i] [j] * 0.5;
                    }
                }
            }
            media [i] = notas [i] [j] + media [i];
        }
    }

    printf ("Alunos reprovados: ");

    for (i = 0; i < quantidade; i++) {
        if (media [i] < 7) {
            printf ("%d ", i + 1);
        }
    }
    return 0;
}