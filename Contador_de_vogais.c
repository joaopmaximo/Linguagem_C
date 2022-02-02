#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char palavra [30];
    char vogais [] = "aeiouAEIOU";
    int tamanho, i, contador, j;

    contador = 0;
    fgets (palavra, 30, stdin);
    tamanho = strlen (palavra);

    for (i = 0; i < tamanho; i++) {
        for (j = 0; j < strlen (vogais); j++) {
            if (palavra [i] == vogais [j]) {
                contador++;
            }
        }
    }
    
    printf ("A palavra inserida possui %d vogais", contador);
    
    return 0;
}