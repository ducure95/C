#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void result(int a, int b)
{

  if (a == 1 || b == 1){
    printf("1\n");
  }

  if(a == 0 && b == 0){
    printf("0\n");
  }

}

int main (){

  int a, b;

  scanf("%d %d", &a, &b);

  result(a,b);

return 0;
}
