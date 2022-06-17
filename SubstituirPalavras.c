#include <stdio.h>
#include <string.h>
#define MAX_LENGHT 10

int main (void) {
    char linha [MAX_LENGHT];
    char * results;
    char palavra [MAX_LENGHT];
    char palavra2 [MAX_LENGHT];
    int i;

    FILE * f;
    f = fopen ("C:\\users\\pichau\\Desktop\\teste.txt", "r+");

    if (f == NULL) {
        printf ("Problemas na leitura do arquivo\n");
    }

    printf ("Insira a palavra que deseja substituir: ");
    scanf ("%s", palavra);
    //fgets (palavra, MAX_LENGHT, stdin);
    printf ("Insira a nova palavra: ");
    scanf ("%s", palavra2);
    //fgets (palavra2, MAX_LENGHT, stdin);

    for (i = 0; i < strlen (palavra); i ++) {
        printf ("palavra [%d] = %c\n", i, palavra [i]);
    }

    for (i = 0; i < strlen (palavra2); i ++) {
        printf ("palavra2 [%d] = %c\n", i, palavra2 [i]);
    }


    while (!feof (f)) {
        results = fgets (linha, MAX_LENGHT, f);
        if (results) {

            for (i = 0; i < strlen (linha); i ++) {
                printf ("linha [%d] = %c\n", i, linha [i]);
            }

            if (strcmp (linha, palavra) == 0) {
                
                printf ("entrou\n");
                strcpy (linha, palavra2);

            }

            else {
                printf ("Nao entrou\n");
            }

            printf ("%s\n", linha);
            

        }
    }


    return 0;
}