#include <stdio.h>
#include <stdlib.h>

void retangulo (int, int);

int main (void) {
    int altura, comprimento;

    scanf ("%d %d", &altura, &comprimento);
    retangulo (altura, comprimento);

    return 0;
}

void retangulo (int a, int c) {
    int i;
    int j;

    for (j = 0; j < a; j++) {
        for (i = 0; i < c; i++) {
            printf ("* ");
        }
        printf ("\n");
    }

}