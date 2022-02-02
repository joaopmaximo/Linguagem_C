#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int conta_espacos (const char *);

int main(void){
    int tam, i;

    printf("Insira o tamanho da string: ");
    scanf ("%d", &tam);

    char palavra [tam];

    printf ("Insira a string: \n");
    fgets (palavra, tam, stdin);
    scanf ("%[A-Z a-z]", palavra);

    tam = strlen (palavra);

    printf ("Espacos em branco: %d\n", conta_espacos (palavra));

    return 0;
}

int conta_espacos (const char *palavra) {

    if (palavra [0] == '\0') {
        return 0;
   } 

    if (palavra [0] == ' ') {
        return 1 + conta_espacos (++palavra);
    }

    return conta_espacos(++palavra);
}