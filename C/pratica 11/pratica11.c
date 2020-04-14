#include <stdio.h>

int imprime(int c[], int n){
	int i;
	printf("\n");
	for(i = 0; i <n; i++)
		printf(" %d ", c[i]);
}

int organizaVetor(int v[], int n){
	int i;
	int j;
	int aux;
	for(i = 0; i < n; i++){
		for(j = i + 1; j < n; j++){
			if(v[i] > v[j]){
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
	imprime(v, n);
}

int compara(int v[]){
	int i;
	int aux = 0;
	int cartela[6] = {6, 9, 22, 23, 48, 52};
	for(i = 0; i < 6; i++){
		if(v[i] == cartela[i]){
			aux++;
		}
	}
	if(aux == 6){
		//printf(" | VENCEDOR!!!: %d ", aux);
		return 0;
	}
	else{
		//printf(" | PERDEDOR - numeros acertados: %d ", aux);
		return 1;
	}
}

int comparaLost(int v[]){
	int i;
	int aux = 0;
	int cartela[6] = {4, 8, 15, 16, 23, 42};
	for(i = 0; i < 6; i++){
		if(v[i] == cartela[i]){
			aux++;
		}
	}
	if(aux == 6){
		//printf(" | VENCEDOR!!!: %d ", aux);
		return 0;
	}
	else{
		//printf(" | PERDEDOR - numeros acertados: %d ", aux);
		return 1;
	}
}	
	
int main(){
	int n;
	int i;
	int vetorInteiros[6];
	int contaCartela = 0;
	int seriadoLost = 0;
	
	FILE *arquivo;
	arquivo = fopen("cartelas.txt","r");
	
	while(feof(arquivo)== 0){
		for(i = 0; i < 6; i++){
			
			fscanf(arquivo, "%d", &n);
			vetorInteiros[i] = n;
			//printf("\n VETOR[%d] : %d", i, n);
		}
		organizaVetor(vetorInteiros, 6);
		//printf(" |cartela %d ", contaCartela); 
		
		if(compara(vetorInteiros) == 0){
			contaCartela++;
		}
		if(comparaLost(vetorInteiros)==0){
			seriadoLost++;
		}
	}
	printf(" \n qts de cartelas vencedoras %d ", contaCartela); 
	printf(" \n qts de pessoas que apostaram no seriado Lost %d ", seriadoLost); 
	fclose(arquivo);
}