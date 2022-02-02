#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Cuidado ao utilizar letras maiusculas e minusculas

bool esta_ordenado (int, char [] [21]);

int main (void) {
    int n, i;

    printf ("Numero de strings: ");
    scanf ("%d", &n);

    char vetor [n] [21];

    for (i = 0; i < n; i++) {
        scanf ("%s", vetor [i]);
    }

    for (i = 0; i < n; i++) {
        printf ("vetor %d = %s\n", i + 1, vetor [i]);
    }

    if (esta_ordenado (n, vetor)) {
        printf ("O vetor esta em ordem alfabetica");
    }
    else {
        printf ("O vetor nao esta em ordem alfabetica");
    }

    return 0;
}

bool esta_ordenado (int n, char vetor [n] [21]) {
    int i;
    
    for (i = 1; i < n; i++) {
        if (strcmp (vetor [i - 1], vetor [i]) > 0) {
            return false;
        }
    }

    return true;
}