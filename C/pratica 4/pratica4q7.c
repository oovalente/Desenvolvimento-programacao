#include <stdio.h>

int ehPar(int n){
	
	if(n%2 == 0){
		printf("seu numero eh par");
		return 1;
	}
	else {
		printf("seu numero eh impar");
		return 0;
	}
}
	
int somaImpares(int N){
	if(ehPar(N)==0){
		N +=2;
		
		
		
	}
	
			
			
			
		}



/*
soma impares{
	variavelAuxiliarDeSoma =0;
	if(entrada é par)
	{
		entrada= entrada-1;
		for(i=1;i<=Numero de entrada;i+=2)
		{
			variavelAuxiliarDeSoma+=1;
		}
	}
	else
	{
		for(i=1;i<=Numero de entrada;i+=2)
		{
			variavelAuxiliarDeSoma+=1;
		}
	}
}
*/

/*
i=1
variavelAuxiliarDeSoma=0;
if(entrada%2==0)
{
	entrada = entrada-1;
}
while(i<=entrada)
{
	variavelAuxiliarDeSoma+=i
	i+=2;
}
	print(variavelAuxiliarDeSoma);
*/


}
	
	
	
	

void main(){
	int x;
	printf("\n insira seu numero:");
	scanf("\n%d", &x);
	somaImpares(x);
	//printf("\n%d", x);
}