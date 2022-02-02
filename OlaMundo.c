#include <stdio.h>
#include <string.h>

int main (void) {
    char port [] = ("Ola, mundo!"), ing [] = ("Hello, world!"), esp [] = ("Hola mundo!"), fran [] = ("Bonjour, Monde!");
    int n;

            printf ("============================================================\n");
            printf ("Escolha o idioma da saudacao:\n");
            printf ("1 - Portugues\n2 - Ingles\n3 - Espanhol\n4 - Frances\n");
        scanf ("%d", &n);
            printf ("\n");

        switch (n) {
            case 1:
                printf ("%s\n", port);
                printf ("============================================================\n");
                break;
            case 2:
                printf ("%s\n", ing);
                printf ("============================================================\n");
                break;
            case 3:
                printf ("%s\n", esp);
                printf ("============================================================\n");
                break;
            case 4:
                printf ("%s\n", fran);
                printf ("============================================================\n");
                break;
            default:
                printf ("Numero incorreto!");
                printf ("============================================================\n");
        }

    return 0;
}