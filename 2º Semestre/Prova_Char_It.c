#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool carac_it (const char *, char);

int main(void){
    int tam, i;
    char ch;
    char palavra [100];

    printf ("Insira a string: \n");
    fgets (palavra, tam, stdin);
    scanf ("%[A-Z a-z]", palavra);

    printf ("Caractere requerido: ");
    scanf ("%s", &ch);

    carac_it (palavra, ch) ? printf ("Verdadeiro") : printf ("Falso");

    return 0;
}

bool carac_it (const char *palavra, char ch) {
    int i;
    int tam = strlen (palavra);

    for (i = 0; i < tam; i++) {
        if (palavra [i] == ch) {
            return true;
        }
    }
    

    return false;
}