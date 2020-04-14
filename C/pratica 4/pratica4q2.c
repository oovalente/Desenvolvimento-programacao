#include <stdio.h>

float areaCirculo (float raio){
	float area  = 3.141592 *(raio*raio);
	raio = area;
	printf("\n area do circulo eh: %f", raio);
}

void main() {
	float x;
	printf("\n insira um valor ao raio:");
	scanf("\n%f", &x);
	areaCirculo(x);
	
	printf("\n%f", x);
}

