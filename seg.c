#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  int main()
  {
    double codico, quantidade, aux;
    scanf("%lf %lf", &codico, &quantidade);

      if (codico == 1)
      {
        aux = quantidade * 5.30;
      }

      if (codico == 2)
      {
        aux = quantidade * 6.0;
      }

      if (codico == 3)
      {
        aux = quantidade * 3.20;
      }
      if (codico == 4)
      {
        aux = quantidade * 2.50;
      }

     if (aux >= 40 || quantidade >= 15)
        {
          printf("R$ %.2lf\n", aux - (aux * 0.15));
        }
        else {
          printf("R$ %.2lf\n", aux);
        }

}
