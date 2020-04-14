#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//QUESTAO 1
/*
int prodEscalar(int v[], int w[], int n){
	int i;
	int produto = 0;
	for(i = 0; i < n; i++){
		produto = produto +  (v[i]*w[i]);
	}
	printf("\n produto eh: %d", produto);
	return produto;
}

void main(){
	int vetor1[5] = {1,2,3,4,5};
	int vetor2[5] = {2,1,1,2,1};
	int x = 5;
	prodEscalar(vetor1, vetor2, x);
}*/

//QUESTAO 2
//fibonacci = soma de dois numeros anteriores;
// 0,1,1,2,3,5,8,13...
/*void fibonacci(int n){
	int f1 = 0;
	int f2 = 1;
	int f3;
	
	int i;
	for(i =0; i<n; i++){
		f3 = f1+f2;
		f2 = f1;
		f1 = f3;
		printf("%d ", f3);
	}	
}

void main(){
	int x = 7;
	printf("\n");
	fibonacci(x);
}*/

//QUESTAO 3
/*
int random(int n){
	return rand()%n;
}

void mediaVetor(int v[], int n){
	int i, j;
	int media;
	for(i =0; i < n-1; i++){
		j = i +1;
		media = (v[i] + v[j])/2;
		i++;
		printf("%d, ", media);
	}
}

void main(){
	srand(time(NULL));
	
	int vetor[6];
	int n;
	for(n =0; n <6; n++){
		vetor[n] = random(6);
		printf("%d, ", vetor[n]);
	}
	printf("\n");
	mediaVetor(vetor, 6);
}*/

//QUESTAO 4
/*
int imprime(int c[], int n){
	int i;
	for(i = 0; i <n; i++)
		printf("%d ", c[i]);
}

int intercalaVetores(int a[], int b[], int n){
	int i= 0;
	int j= 0;
	
	n = 2*n;
	int c[n];
	
	int v;	
	for(v = 0; v < n; v ++){
		c[v] = a[i];
		v++;
		i++;
		c[v] = b[j];
		j++;
	}
	imprime(c, n);
}

void main(){
	int x[3] = {1,2,3};
	int y[3] = {8,5,7};
	
	intercalaVetores(x,y,3);
}*/

//QUESTAO 5
/*
  //TENTATIVA FRUSTRADA DE FAZER RECURSIVAMENTE
int imprime(int c[], int n){
	int i;
	for(i = 0; i <n; i++)
		printf("%d ", c[i]);
}

int troca(int v, int h){
	int aux;
	aux = v;
	v = h;
	h = aux;
}

int inverte(int v[], int n){
	int i = 0;
	int j = n-1;
	
	if(v[j] == v[i]){
		imprime(v, 5);
		return 0;
	}
	troca(v[i], v[j]);
	i++;
	j--;
	return inverte(v,j);
}

void main(){
	int w[5] = {9, 5, 3, 4, 2};
	inverte(w, 5);
}*/
/*
int imprime(int c[], int n){
	int i;
	for(i = 0; i <n; i++)
		printf("%d ", c[i]);
}

int inverte(int v[], int n){
	int i = 0;
	int j = n-1;
	int aux;
	
	for(i = 0; i != j; i++){
		aux = v[i];
		v[i] = v[j];
		v[j] = aux;
		j--;
	}
	imprime(v,n);
}

void main(){
	int w[5] = {9, 5, 3, 4, 2};
	inverte(w, 5);
}*/

//QUESTAO 6
/*
int tamanho_Vetor(int v[], int w[], int n){
	int i;
	int j;
	int k =0;
	int tamanho = 2 * n;
	int c[128];

	for(i =0; i < n; i++){
		for(j = 0; j < n; j++){
			if(v[i] == w[j]){
				c[k] = v[i];
				tamanho--;
				k++;
				}
			}	
	}
	
	for(i =0; i < n; i++){
		j = i+1;
			if(v[i] == v[j]){
				c[k] = v[i];
				tamanho--;
				k++;
			}	
	}
	
	for(i =0; i < n; i++){
		j = i+1;
			if(w[i] == w[j]){
				tamanho--;
				c[k] = v[i];
				tamanho--;
				k++;
				}	
	}
	
	printf("\n tamanho eh: %d", tamanho);
	
	for(i = 0; i <k; i++)
		printf("\n %d ", c[i]);
	
}

void main(){
	int x[6] = {1,5,1,5,2,6};
	int y[6] = {1,5,2,3,9,5};
	
	tamanho_Vetor(x, y, 3);
}
	

// compara vetor 1 e vetor 2
// descobrir qual tamanho do novo vetor (tentar fazer isso dentro da funçao compara)	
// criar um vetor para armazenar a uniao do vetor;

//OBS. N CONSEGUI FAZER
*/

//QUESTAO 7

int random(int n){
	return rand()% n;
}

int menor(int v[], int n){
	if(n <= 1){
		return v[0];
	}
	int x = menor(v, n-1);
	if(x < v[n-1]){
		return x;
	}
	return v[n-1];
}

int maior(int v[], int n){
	if(n <= 1){
		return v[0];
	}
	int x = maior(v, n-1);
	if(x > v[n-1]){
		return x;
	}
	return v[n-1];
}		

void main(){
	srand(time(NULL));
	int vetor_contagem[10];
	int k;
	int i;
	for(i = 0; i < 10; i++){
		vetor_contagem[i] = 0;
	}

	for(i = 0; i < 500; i++){
		k = random(10);
		//printf("\n k eh: %d",k);
		vetor_contagem[k] = vetor_contagem[k] +1 ;
		//printf("\n vetor[%d] eh: %d", k, vetor_contagem[k]);
	}
	for(i = 0; i < 10; i++){
		printf("\n VETOR [%d]   : %d", i, vetor_contagem[i]);
	}
	printf("\n -------------------------------");
	int x = menor(vetor_contagem, 9);
	printf("\n MENOR eh: %d", x);
	
	int y = maior(vetor_contagem, 9);
	printf("\n MAIOR eh: %d", y);
	
	int diferenca = y - x;
	printf("\n DIFERENCA eh: %d", diferenca);
}
	
	
	
	