#include <stdio.h>

int digitos(int number, int q_dig)
{
	
	if (number < 10 ){

	q_dig +=  1;

	printf("%d\n", q_dig);

	return 0;

	}
	else{

	q_dig += 1;

	digitos(number/10, q_dig);

	}
	

}

int main ()
{
	int number;
	scanf("%d", &number);
	digitos(number, 0);

	return 0;
}