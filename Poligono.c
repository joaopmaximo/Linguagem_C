#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    int i, quantidade;

    printf ("Quantidade de polígonos: ");
    scanf ("%d", &quantidade);

    float resultado [quantidade];
    int lados [quantidade];
    float valorlado [quantidade];
    
    for (i = 0; i < quantidade; i++) {
        printf ("Polígono %d\n", i + 1);
        printf ("Quantidade de lados: ");
        scanf ("%d", &lados [i]);
        printf ("Valor do lado: ");
        scanf ("%f", &valorlado [i]);
        resultado [i] = lados [i] * valorlado [i];
    }

    printf ("Perímetros:\n");
    
    for (i = 0; i < quantidade; i++) {
        printf ("Polígono %d -> %.2f\n", i + 1, resultado [i]);
    }

    return 0;
}