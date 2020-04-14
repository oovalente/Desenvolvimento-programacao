#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "redesocial.h"

int M[NUM_PESSOAS][NUM_PESSOAS];

void inicializar_rede() {
	int i;
	int j;
	printf("\n");
	printf("-------------------------------------------------------------------------------------------");
	for(i = 0; i <NUM_PESSOAS; i++){
		printf("\n");
		for(j = 0; j < NUM_PESSOAS; j++){
			M[i][j] = 0;
			//printf("%5d%5d\t", i, j);
			printf("%5d", M[i][j]);	
		}
	}
	printf("\n");
	printf("-------------------------------------------------------------------------------------------");	
}

void adicionar_amizade(int i, int j) {
	M[i][j]=1;
	M[j][i]=1;	
}

float random_float() {
    float r = (float)((rand())+ 1.0)/(float)(RAND_MAX);
	printf("\n%f",r); 
	return  r;
}

void popularRedeSocialAleatoriamente(float P) {
	int i;
	int j;
	float r;
	for(i = 0; i<NUM_PESSOAS; i++){
		for(j = 0; j<NUM_PESSOAS; j++){
				r = random_float();
				
				if(j == i){
					M[i][j]=0;
				}
				else if(r < P){
						adicionar_amizade(i,j);	
				}
		}
	}
}

void imprimirRedeSocial() {
	int i;
	int j;
	printf("\n");
	printf("--------------------------------REDE SOCIAL--------------------------------------------------");
	for(i = 0; i <NUM_PESSOAS; i++){
		printf("\n");
		for(j = 0; j < NUM_PESSOAS; j++){
			//M[i][j] = 0;
			//printf("%5d%5d\t", i, j);
			printf("%5d", M[i][j]);	
		}
	}
	printf("\n");
	printf("-------------------------------------------------------------------------------------------");	
}


int numAmigosEmComum(int v, int u) {
	int w = 0;
	if(M[i][j] ==1 && M[j][i]==1)
		w++;
	
    return w;
}

void main(){
	srand(time(NULL));
	inicializar_rede();
	float P = random_float();
	//float P = 0.8;
	printf("\n P eh: %f", P);
	popularRedeSocialAleatoriamente(P);
	imprimirRedeSocial();	
}


