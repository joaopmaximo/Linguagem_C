#include <stdio.h>

int num_digitos (int);

int main (void) {
    int numero, resultado;

    scanf ("%d", &numero);

    resultado = num_digitos (numero);

    printf ("%d\n", resultado);

    return 0; 
}

int num_digitos (int numero) {
    int contador = 1;

    while (numero >= 10 || numero <= -10) {
        numero = numero / 10;
        contador++;
    }

    return contador;
}