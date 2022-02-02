#include <stdio.h>

void imprime_vetor(int, int []);
void preenche_vetor(int, int []);

int main()
{
    int n;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);
    int vet[n];
    printf("sizeof(vet) = %zd\n", sizeof(vet));

    preenche_vetor(n, vet);

    imprime_vetor(n, vet);
    return 0;
}

void preenche_vetor(int n, int a[])
{
    printf("\nInforme os %d elementos do vetor: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void imprime_vetor(int n, int a[])
{
    printf("\nsizeof(a) = %zd\n", sizeof(a));
    printf("Conteudo do vetor: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}