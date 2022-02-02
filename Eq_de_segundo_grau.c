#include <stdio.h>
#include <math.h>

int main(void) {
  float x1, x2, d, a , b , c;

  printf ("Insira os valores de a, b e c, respectivamente: ");
  scanf ("%f %f %f", &a, &b, &c);

  d = pow(b, 2) - 4 * a * c;
  printf ("Delta: %3.2f\n", d);

  if (d < 0) {
    printf ("Nao ha raizes no conjunto dos numeros reais.\n");
  }
  else {
    if (d == 0) {
      x1 = -b / (2 * a);
      printf ("Ha uma unica raiz: %3.2f", x1);
    }
    else {
      if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf ("Raiz 1: %3.2f\n", x1);
        printf ("Raiz 2: %3.2f", x2);
      }
    }
  }
  return 0;
}