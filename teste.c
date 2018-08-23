#include <stdio.h>
#include <math.h>

int conta_par(int num, int contador, int par){
	
	if (contador >= num){
		
		if (par == 2){
			//printf(" par");
			return 1;
		}
		else{
		//	printf(" nao par");
		}
		return 0;
	}else
	{
		int aux;
		aux = num % contador;
		if (aux == 0){
		par = par +1;
		}
	}
	conta_par(num, contador+1, par);
}
 //------------------------------------------
void condicao(int num, int x, int par){
	scanf("%d", &num);
	if (num == -1)
	{
		return 0;
	}else
	{
		x = conta_par(num, x, par);
		printf("%d\n", x);
		condicao(num, x, par);
	}
}

//------------------------------------------
int main (){
	int num, x, aux;
	x = conta_par(num, 1, 0);
	//scanf("%d", &num);
	condicao(num, 1, 0);
	return 0;
}
