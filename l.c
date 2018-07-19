#include <stdio.h>
#include <stdlib.h>
#include <math.h>


	int main ()
{
	   int a;
     double pontencia;
  	scanf("%d", &a);

    if (a >= 1 && a <= 20)
  {
    printf("Potencia de: %d W\n", (a * a * a) + 20);
  }
    else if (a >= 21 && a <= 40)
  {
    pontencia = pow (a - 10,2);
    printf("Potencia de: %.0lf W\n", pontencia + 8000);
  }

    else if (a >= 41 && a <= 60)
  {
    printf("Potencia de: %d W\n", (a * 5) + 9000);
  }

  else if (a >= 61 && a <= 80)
  {
    printf("Potencia de: %d W\n", (a * 2) + 9300);
  }

    else if (a >= 81 && a == 100)
  {
    printf("Potencia de: %d W\n", a + 9500);
  }
}
