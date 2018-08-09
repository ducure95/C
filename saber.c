#include <stdio.h>

int mani(int b, int* counter_par, int* counter_impar)
{

    if (b % 2 == 0)
    {
      *counter_par += 1;

      return 0;

    }

    else
    {
      *counter_impar += 1;

      return 0;

    }

}

void repeat(int a, int counter, int counter_par, int counter_impar){

  if(counter > a){

      printf("par = %d\n", counter_par);
      
      printf("impar = %d\n", counter_impar);


    return;

  }

  else{

    int b = 0;
    scanf("%d", &b);

    mani(b, &counter_par, &counter_impar);

    repeat(a, counter + 1, counter_par, counter_impar);

  }

}

int main ()
{
  int a;
  scanf("%d", &a);

  repeat(a, 1, 0, 0);

  return 0;
}
