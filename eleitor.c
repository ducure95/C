#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a, b, c;
    scanf("%d", &a);

    if (a >= 18 && a <= 65)
    {
      printf("eleitor obrigatorio\n");
    }

    if (a >= 16 && a < 18 || a > 65)
    {
      printf("eleitor facultativo\n");
    }

    else if  (a < 16)
    {
      printf("nao eleitor\n");
    }
    return 0;
}
