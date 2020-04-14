#include <stdio.h>

float troca (float *end_valor1, float *end_valor2){
	float a;
	a = *end_valor1;
	*end_valor1 = *end_valor2;
	*end_valor2 = a;
	
	
}

void main() {
	float m,n;
	scanf("%f %f", &m, &n);
	printf("\n endereco de m eh: %p", &m);
	printf("\n endereco de n eh: %p", &n);


	troca(&m,&n);
	
	printf("\nnovo valor m = %f\nnovo valor n = %f", m, n);
}
