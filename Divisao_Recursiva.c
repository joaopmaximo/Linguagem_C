// Implemente uma função recursiva para calcular o quociente da divisão inteira de 2 inteiros,
// a e b, segundo a definição recursiva abaixo:
// a) a dividido por b = 0, se b > a
// b) a divido b = 1 + (a – b) dividido por b, se a ≥ b

#include <stdio.h>

int div (int, int);

int main (void) {
    int a, b;

    printf ("Insira a e b: ");
    scanf ("%d %d", &a, &b);

    printf ("Quociente = %d", div (a, b));

    return 0;
}

int div (int a, int b) {

    if (b > a) {
        return 0;
    }

    return 1 + div (a - b, b);
}