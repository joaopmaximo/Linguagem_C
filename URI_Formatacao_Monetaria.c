#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int i = 0, aux = 0, tamDolares = 0, tamCentavos = 0;
	char dolares[20], centavos[5];

	while(scanf("%s", dolares) != EOF) {
		scanf("%s", centavos);

		i = 0;
		aux = strlen(dolares) % 3;
		tamDolares = strlen(dolares); // guarda o tamanho da string dolares
		tamCentavos = strlen(centavos); // guarda o tamanho da string centavos

		if(aux == 0) aux = 3;

		printf("$");

		while(i < tamDolares) {
			if(aux > 0) {
				printf("%c", dolares[i]);
				aux--;
			}else {
				printf(",%c", dolares[i]);
				aux = 2;
			}

			i++;
		}

		printf(".");

		if(tamCentavos == 1) {
			printf("0%c\n", centavos[0]);
		}else {
			printf("%c%c\n", centavos[0], centavos[1]);
		}
	}

	return 0;
}