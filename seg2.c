#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  int main ()
  {

    double salario, val_compr, aux, aux2;
    scanf("%lf %lf", &salario, &val_compr);

    aux = (val_compr / salario) * 100;
    aux2 = (30 - aux) / 100 * salario;

    if (aux <= 30){
      printf("%.2lf\n", aux2);
    }
    else
    printf("0.00\n");

  return 0;
}
