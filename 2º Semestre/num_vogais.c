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

    printf ("Numero de vogais: %d\n", conta_espacos (palavra));

    return 0;
}

int conta_espacos (const char *palavra) {

    if (palavra [0] == '\0') {
        return 0;
   } 

    if (palavra [0] == 'a' || palavra [0] == 'A' || palavra [0] == 'e' || palavra [0] == 'E' || palavra [0] == 'i' || palavra [0] == 'I' || palavra [0] == 'o' || palavra [0] == 'O' || palavra [0] == 'u' || palavra [0] == 'U') {
        return 1 + conta_espacos (++palavra);
    }

    return conta_espacos(++palavra);
}