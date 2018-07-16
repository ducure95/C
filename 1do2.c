#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

  double a, b, c;
  double media;

  scanf("%lf %lf %lf", &a, &b, &c);

  media = (a + b + c ) / 3;

  if (media >= 70 && media <=100){

    printf("A media do aluno foi %.2lf e ele foi APROVADO\n",media);
  }
  if (media >= 0 && media <= 40){
    printf("A media do aluno foi %.2lf e ele foi REPROVADO\n", media);
  }
  if( media > 40 && media < 70){
    printf("A media do aluno foi %.2lf e ele foi FINAL\n", media);
  }

  if (media < 0 || media > 100){

    printf("Media invalida\n" );
  }

}
