#include <stdio.h>

int main(void){
    int num, dig, first;

    scanf("%d", &num);

    cont_num(num, &dig, &first);

    printf("Quantidade de digitos: %d\n", dig);
    printf("Primeiro digito: %d", first);

return 0;
}

void cont_num (int n, int *x ,int *y ) {

    *x = 1;

    while (n > 9) {
        (*x) ++;
        n = n / 10;
    }

    *y = n;
}