#include <stdio.h>

int main(void) {
    int i, j;
    int semanas [5] [2];
    int ordem [5];

    for (i = 0; i < 5; i++) {
        printf ("Semana %d\n", i + 1);
        printf ("Contaminados: ");
        scanf ("%d", &semanas [i] [0]);
        printf ("Mortes: ");
        scanf ("%d", &semanas [i] [1]);
        printf ("\n");
    }

    for (i = 0; i < 5; i++) {
        if (semanas [i] [1] > semanas [i+1] [1]) {
            ordem [i] = i + 1;
        }
        printf ("%d", ordem [i]);
    }

    return 0;
}