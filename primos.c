#include <stdio.h>

int verify(int num, int* div, int* counter)
{

	if(counter > num){


		printf("%d\n", div);

		return 0;

	}

	if (num % counter == 0){


		div ++;

		verify(num, div, counter + 1);

	}

	else{

		verify(num, div, counter + 1);

	}
}

int rep(int a, int num, int div, int counter)
{
	if (num > a){

		printf("")
	}
}

int main ()
{

	int num;
    scanf("%d", &num);

    verify(num, 0, 1);


	return 0;
}