#include <stdio.h>

float parteInteira(float x){
	int a = x;
	float r = a;
	return r;
	//significa que eu pego um n. flutuante -3.14 e transformo em inteiro -3 e depois transformo em fluatuante de novo -3.0;
}

float parteFracionaria(float p) {
	int a = p;
	float r = p - a;
	return r;
	//significa que eu pego o -3.14, transformo em uma variavel int -3.0 e subtraio pra obter a parte facionaria -0.14;
}

float divInts(int m, int n){
	int a = m/n;
	float r = a;
	return r;
}

void main () {
	float x = -3.141592;
	float p = 2.123;
	int m = 30;
	int n = 15;
	printf("\n parte inteira eh:%f", parteInteira(x));
	printf("\n parte fracionaria eh:%f", parteFracionaria(p));
	printf("\n inteiros divididos eh: %f",divInts(m,n));
}
