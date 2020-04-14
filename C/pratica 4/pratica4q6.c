#include <stdio.h>
#include <math.h>


float pesoIdeal(float h, char sexo){
	char M;
	char F;
	float PI;
	
	if(sexo=='M'){
		PI = -58.0+(72.7 * h);
		//printf("\nM seu peso ideal eh: %f", PI);
		return PI;
	}
	else{
		PI = -44.7 + (62.1 * h);
		//printf("\n F seu peso ideal eh: %f", PI);
		return PI;
	}
}

void main(){
	float pesoUsuario;
	printf("\n insira qual seu peso:");
	scanf("\n%f", &pesoUsuario);	
	
	float x;
	printf("\n insira sua altura:");
	scanf("\n%f", &x);	
	

	char y;
	printf("\n insira seu sexo 'M' ou 'F':");
	scanf("\n%c", &y );
	
	pesoIdeal(x, y);

	float peso;
	peso = pesoUsuario  - pesoIdeal(x, y);
		if (pesoUsuario> pesoIdeal(x,y)){
		printf("\n vc deve perder peso: %f", peso);
		}
		else {
		printf("\n vc deve ganhar peso: %f", peso);	
		}
	
}


//peso = pesoUsuario - peso ideal;