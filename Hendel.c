#include <stdio.h>

void printarfuncao (int, int);

int main(void) {
    int i, N, j;

    while (1) {
        scanf("%d", &N);
        if (N == 0) break;
        else {

            int M [N] [N];

            for (i = 0; i < N; i++) {
                for (j = 0; j < N; j++) {
                    if (i == j) {
                        M [i] [j] = 1;
                    }
                    if (i > j) {
                        M [i] [j] = (i - j) + 1;
                    }
                    if (i < j) {
                        M [i] [j] = (j - i) + 1;
                    }
                }
            }

          //  for(i = 0;  i < N; i++) {
           //     for(j = 1; j < N; j++) {
           //         M [i] [j] = (M [i] [j - 1]) + 1;
         //       }
         //   }

            for(i = 0;  i < N; i++) {
                for(j = 0; j < N; j++) {
                    printf ("  %d ", M [i] [j]);
                }
                printf ("\n");
            }
        }
    }
}