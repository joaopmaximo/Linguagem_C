#include <stdio.h>

int main (void) {
    int x;
    float z;
    int a;
    char c;
    int b;

    /*
    Aqui podemos perceber como é feita a distribuição da memória.
    Ao printar, ele exibe o primeiro endereço alocado pela variável,
    sendo os seguintes endereços (dependendo do tipo da variavel) também pertencentes a variavel.
    Exemplo 1: a variavel "x" do tipo inteiro ocupa 4 bytes da memória: 6422300, 6422301, 6422302, 6422303.
    Exemplo 2: a variavel "z" do tipo float ocupa 4 bytes da memória: 6422296, 6422297, 6422298, 6422299.
    Exemplo 3: a variavel "c" do tipo caractere ocupa 1 byte da memória: 6422291.
    */
   
    printf ("inteiro: %d\n", &x);
    printf ("float: %d\n", &z);
    printf ("inteiro: %d\n", &a);
    printf ("caractere: %d\n", &c);
    printf ("inteiro: %d\n", &b);

    return 0;
}