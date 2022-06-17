// Fibonnaci

#include <stdio.h>

int main (void) {
    int x, cont, a, b = 0, c = 1;

    printf ("Insira um numero inteiro: ");
    scanf ("%d", &x);
    //int v [x];

    //printf ("%d\n", v [0] = 1);
    //printf ("%d\n", v [1] = 1);
    printf ("%d\n", 1);

    for (cont = 2; cont < x; cont++) {
        //v [cont] = v [cont - 1] + v [cont - 2];
        a = b + c;
        printf ("%d\n", a);
        b = c;
        c = a;
    }

    return 0;
}