#include <stdio.h>

int ehDivisivelPor3ou5(int n){
	int a;
	int b;
	a = n/3;
	b = n/5;

	if(3*a ==n && 5*b == n){
		printf("seu numero eh divisivel por 3 e por 5 simultaneamente");
		return 1;
	}
	if(3*a !=n || 5*b != n){
		printf("seu numero nao eh divisivel ou por 3 ou por 5");
		return 0;
	}
}
void main(){
	int x;
	printf("\n insira seu numero:");
	scanf("\n%d", &x);
	ehDivisivelPor3ou5(x);
	printf("\n%d", x);
	
	
}
	