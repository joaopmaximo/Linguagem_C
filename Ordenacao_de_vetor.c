#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Ordenação de Vetores

int main (void) {
    int a [20], aux;
    int i, j;
    
// A função time() retorna um inteiro com o número de segundos passados desde a UNIX Epoch (01/01/1970).
// A função srand define uma semente à função "rand". Unindo-a com a função "time", impede que os números aleatórios gerados 
// se repitam.
    srand (time(NULL));

// Preenchendo o vetor com números aleatórios, com o uso da função "rand"
    for (i = 0; i < 20; i++) {
        a [i] = rand() % 1000;
        printf ("%d ", a [i]);
    }

    printf ("\n");

// Ordenando em ordem decrescente (maior para o menor)
    for (i = 0; i < 20; i++)  {
        for (j = i; j <= 20; j++) {
            if (a [j] > a [i]) {
                aux = a [j];
                a [j] = a [i];
                a [i] = aux;
            }
        }
    }

// Mostrando o vetor já ordenado
    for (i = 0; i < 20; i++) {
        printf ("%d: %d\n", i + 1, a [i]);
    }

    return 0;
}