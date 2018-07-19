#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

	int main ()
	{
		double a, b;
		double operacao;

		scanf("%lf %lf", &a, &b);
		operacao = (b * 100)/a;

		if(operacao >= 0 && operacao < 20 )
		{
			printf("%.2lf%% 4.40%% Pessimo\n", operacao);
		}

		else if (operacao >= 20 && operacao < 40)
		{
			printf("%.2lf%% 31.65%% Ruim\n", operacao);
		}

			else if (operacao >= 40 && operacao < 60)
		{
			printf("%.2lf%% 56.82%% Bom\n", operacao);
		}

			else if (operacao >= 60 && operacao < 80)
		{
			printf("%.2lf%% 80.00%% Muito Bom\n", operacao);
		}

			else if (operacao >= 80 && operacao <= 100)
		{
			printf("%.2lf%% 94.00%% Excelente\n", operacao);
		}

		return 0;
	}
