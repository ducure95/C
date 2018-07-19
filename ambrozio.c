#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  int main()
  {
    double codico, quantidade, aux;
    scanf("%lf %lf", &codico, &quantidade);

    if (codico == 1 && quantidade >= 15 && 5.30 * quantidade >= 40 )
    {
      aux = quantidade * 5.30;
      printf("R$ %.2lf\n", aux - (aux * 0.15));
    }

   else if (codico == 2 && 6 * quantidade >= 40 && quantidade >= 15)
    {
      aux = quantidade * 6;
      printf("R$ %.2lf\n",  aux - (aux * 0.15));
    }

    else if (codico == 3 && 3 * quantidade >= 40 && quantidade >= 15)
    {
      aux = quantidade * 3.20;
      printf("R$ %.2lf\n",  aux - (aux * 0.15));
    }
    else if (codico == 4 && quantidade >= 15 && 2.50 * quantidade >= 40 )
    {
      aux = quantidade * (2.50 * 0.85);
      printf("R$ %.2lf\n",  aux);
    }

}
