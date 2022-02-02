#include <stdio.h>
#include <string.h>

int string (char [], char);

int main (void) {
    char hm [50], carac;

    printf ("Insira a string: ");
    fgets (hm, 50, stdin);

    printf ("Insira o caractecere desejado: ");
    scanf ("%c", &carac);

    printf ("O caractere esta na posicao: %d", string (hm, carac));

    return 0;
}

int string (char hm [], char carac) {
    int i;

    for (i = 0; i < strlen (hm); i++) {
        if (hm [i] == carac)
            return i + 1;
    }

    return -1;
}