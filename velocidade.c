#include <stdio.h>
#include <stdlib.h>

int main ()
{
    double vel_max, vel_vei, multa;
    int pontos;

    scanf("%lf %lf", &vel_max, &vel_vei);

      if (vel_vei <= vel_max)
      {

        multa = 0.00;
        pontos = 0;

      }
      if (vel_vei > vel_max && vel_vei <= (0.2 * vel_max + vel_max)){

        multa = 85.13;
        pontos = 4;

      }
      if (vel_vei > (0.2 * vel_max + vel_max) && vel_vei <= 0.5 * vel_max + vel_max)
      {
        multa = 127.69;
        pontos = 5;

      }
      if (vel_vei > 0.5 * vel_max + vel_max)
      {

        multa = 574.62;
        pontos = 7;

      }

      printf("%.2lf\n%d\n", multa, pontos);

    return 0;
}
