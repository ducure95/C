#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
int a, b, c, aux;

  scanf("%d %d %d", &a, &b, &c);

  if (a > c){

      aux = a;
      a = c;
      c = aux;

  }

  if(b > c){

    aux = b;
    b = c;
    c = aux;

  }

  if(a > b){

    aux = a;
    a = b;
    b = aux;

  }

printf("%d\n", a);

return 0;
}
