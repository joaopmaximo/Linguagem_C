/*
2. Criar uma função em C que receba um número binário e converta-o para decimal. Obs.:
O parâmetro passado na chamada à função deve ser alterado para decimal.
*/

#include <stdio.h>

void bin_dec(int *);

int main()
{
    int num;
    printf("Informe um numero binario: ");
    scanf("%d", &num);
    bin_dec(&num);
    printf("Valor em decimal: %d\n", num);
    return 0;
}

void bin_dec(int * n)
{
    int pot2 = 1, bin = *n;
    *n = 0;
    while (bin > 0) {
        *n += (bin % 10) * pot2;
        pot2 *= 2;
        bin /= 10;
    }
}