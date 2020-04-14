#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float pesoIdeal(float h, char sexo){
	char M;
	char F;
	float PI;
	
	if(sexo=='M'){
		PI = -58.0+(72.7 * h);
		printf("\nM seu peso ideal eh: %f", PI);
	}
	else{
		PI = -44.7 + (62.1 * h);
		printf("\n F seu peso ideal eh: %f", PI);
	
	}
}

void main(){

	float x;
	
	printf("\n insira sua altura:");
	scanf("\n%f", &x);	
	

	char y;
	printf("\n insira seu sexo 'M' OU 'F'");
	scanf("\n%c", &y );

	
	pesoIdeal(x,y);
	
}

