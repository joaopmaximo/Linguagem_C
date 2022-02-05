/*
3. Implemente uma função recursiva para imprimir um número natural passado como
parâmetros na base binária.
*/

#include <stdio.h>

void dec_para_bin(int);

int main(void){
    int nat;

    printf("Digite o nu'mero em decimal: ");\
    scanf("%d", &nat);
    printf("O nu'mero %d em binario e': ", nat);
    dec_para_bin(nat);
    printf("\n");

    return 0;
}

void dec_para_bin(int num_nat){
    if (num_nat < 2) {
        printf("%d", num_nat);
    }
    else {
        dec_para_bin(num_nat / 2);
        printf("%d", num_nat % 2);
    }
}