#include <stdio.h>
#include <math.h>

// Criar uma função em C que receba como
//parâmetro o valor de um ângulo em radianos e
//converta-o para graus. Obs.: O parâmetro
//passado na chamada à função deve ser
//alterado para graus. Dica: graus =
//radianos*180/ π.

void conversao (double *);

int main (void) {
	double rad;

	printf ("Insira o angulo em radianos: ");
	scanf ("%lf", &rad);
	conversao (&rad);
	printf ("Angulo em graus: %.2lf", rad);

	return 0;
}

	void conversao (double *pang) {
		*pang = *pang * 180 / M_PI;
	}