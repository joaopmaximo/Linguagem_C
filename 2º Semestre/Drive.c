#include <stdio.h>
#include <math.h>

int mochila(int [], int, int);

int main() {
    int capacidade, num;

    printf("Informe a quantidade de fotos: ");
    scanf("%d", &num);

    printf("Informe a capacidade do drive: ");
    scanf("%d", &capacidade);

    int valor[num];

    printf("Informe o tamanho de cada foto:\n");
    for (int i = 0; i < num; i++) {
        scanf("%d", &valor[i]);
    }

    printf("Maximo da fotos: %d\n", mochila(valor, capacidade, num));

    return 0;
}


int mochila(int v[], int c, int n)
{
    int pos, valor, max = 0, m = (int) pow(2, n);
    for (int i = 0; i < m; i++) {
        valor = 0;
        for (int j = 0; j < n; j++) {
            pos = (i >> j) % 2;
            if (pos == 1) {
                valor++;
            }
        }
        if (valor <= c && valor > max) {
            max = valor;
        }
    }

    return max - 1;
}