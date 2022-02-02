#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int x;
    // Inicializando um ponteiro.
    int * ponteiro;
    
    // Ponteiro igual a endereço de X.
    ponteiro = &x;
    
    while (1) {
        printf ("Insira o valor de X: ");
        
        // Valor digitado vai ser armazenado no endereço de X.
        scanf ("%d", &x);
        if (x == 0) {
            printf ("Programa finalizado.\n");
            return 0;
        }

        printf ("Valor de X: %d\n", x);

        printf ("Endereco de X: %d\n", &x);

        printf ("Valor do Ponteiro: %d\n", *ponteiro);

        printf ("Endereco do Ponteiro: %d\n", &ponteiro);

        // Ponteiro sem asterisco devolve o valor do ponteiro, que é o endereço de X, especificado na linha 09.
        printf ("Ponteiro sem *: %d\n", ponteiro);
        printf ("=================================================\n");
    }

    return 0;
}