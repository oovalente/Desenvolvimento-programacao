#include <stdio.h>
#include <math.h>

int main () {

	float pesodobrutos = 122;
	float alturadobrutus = 1.84;
	float IMCdobrutus = pesodobrutos/(alturadobrutus*alturadobrutus);
		
		printf("IMC do Brutus eh: %f \n", IMCdobrutus);
	
	float IMCideal = 25;
	float pesoideal = (alturadobrutus*alturadobrutus)*IMCideal;
		
		printf("o peso ideal do Brutus eh: %f \n", pesoideal);
	
	float R1;
		R1 = pesodobrutos - pesoideal;
		printf("Brutus deve perder % .2f kg.\n" , R1);
		system("PAUSE");

		float pesodaolivia;
		pesodaolivia = 45;
	float alturadaolivia;
		alturadaolivia = 1.76;
	float IMC;
		IMC = pesodaolivia/(alturadaolivia*alturadaolivia);
		printf("IMC da Olivia eh: %f \n", IMC);
		system("PAUSE");
	float IMCidealdaolivia;
		IMCidealdaolivia = 18.5;
	float pesoidealdaolivia;
		pesoidealdaolivia = (alturadaolivia*alturadaolivia)*IMCidealdaolivia;
		printf("o peso ideal da Olivia eh: %f \n", pesoidealdaolivia);
	float R2;
		R2 = pesodaolivia - pesoidealdaolivia;
		printf("Olivia deve perder % .2f kg.\n" , R2);
	return 0;
	
}