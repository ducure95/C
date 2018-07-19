#include <stdio.h>
#include <stdlib.h>

	int main (){
		int a, b, c;

		scanf("%d %d %d", &a, &b, &c);

    if (a == b + c || c == b + a || b == a + c)
		{
			printf("S");
		}
		else if (a - b == 0|| a - c  == 0 || b - c == 0)
    {
			printf("S");
    }
		else
		{
		    printf("N");
		}

		return 0;
}
''
