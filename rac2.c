#include <stdio.h>

int main (void) {
    int maior, menor, x, cont = 1;

    scanf ("%d", &x);
    maior = x;
    menor = x;

    while (cont < 10) {
        scanf ("%d", &x);
        if (x > maior) {
            maior = x;
        }
        else{
            if (x < menor) {
                menor = x;
            }
        }
        cont++;
    }

    printf ("Maior = %d\nMenor = %d", maior, menor);

    return 0;
}