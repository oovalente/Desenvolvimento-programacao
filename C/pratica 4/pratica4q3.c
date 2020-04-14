#include <stdio.h>

int ehPar(int n){
	int a;
	a = n/2;
	
	if(2*a == n){
		printf("seu numero eh par");
		return 1;
	}
	else {
		printf("seu numero eh impar");
		return 0;
	}
	
}
	
void main(){
	int x;
	printf("\n insira seu numero");
	scanf("\n%d", &x);
	ehPar(x);
	printf("\n%d", x);
	
	
}
	
