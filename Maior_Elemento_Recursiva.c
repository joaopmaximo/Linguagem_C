/*
4. Implemente uma função recursiva para determinar o maior elemento de um vetor de inteiros.
São dados como parâmetros da função o tamanho do vetor (um valor maior ou igual a 1) e o
vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maior_elemento(int [], int);

int main(void){
    int n;
    printf("Digite o nu'mero de elementos do vetor: ");
    scanf("%d", &n);
    int vetor[n];
    srand(time(NULL));
    printf("\nOs elementos do vetor sao:\n");
    for(int i = 0; i < n; i++){
        vetor[i] = (rand() % 1000) + 1;
        printf("%d ", vetor[i]);
    }
    printf("\nO maior elemento e': %d\n", maior_elemento(vetor, n));
    return 0;
}

int maior_elemento(int vet[], int a)
{
    if (a == 1){
        return vet[0];
    }
    int l = maior_elemento(vet, a - 1);
    return (vet[a - 1] > l ? vet[a - 1] : l);
}        