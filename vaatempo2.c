#include <stdio.h>
#include <stdlib.h>

	int main (){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);

		if(a == c )
		{
			printf("S");
		}
		else if (a == b + c && c == b + a)
		{
			printf("S");
		}
		else if (a == b || a == c || b == c)
    {
			printf("S");
    }
		else if (a > c - 1 && b == 1 || a < c + 1 && b == 1)
		{
		    printf("S");
		}
		else
		{
		    printf("S");
		}

		return 0;
}
