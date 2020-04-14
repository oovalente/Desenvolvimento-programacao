#include <stdio.h>

//QUESTAO 1
/*
//Euler = 1 + 1/1! + 1/2!....
int fatorial(int x){
	if(x == 1){
		return 1;
	}
	return x * (fatorial(x-1));
}
void main(){
	int w = 1 ;
	float euler = 1.0;
	while(w!=6){
		euler = euler + (1.0/fatorial(w));
		w++;
	}
	printf("\n %f ", euler);
}*/

//QUESTAO 2
/*void main(){
	int nota;
	printf("insira a nota aqui\n");
	scanf("%d",&nota);
	
	switch(nota){
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			printf("\n conceito: F");
			break;
		case 5:
			printf("\n conceito: E");
			break;
		case 6:
			printf("\n conceito: D");
			break;
		case 7:
			printf("\n conceito: C");
			break;
		case 8:
			printf("\n conceito: B");
			break;
		case 9:
			printf("\n conceito: A");
			break;
		default:
			printf("\n conceito: A");
	}
}*/

//QUESTAO 3
/*
void triangulo(int n){
	int w;
	int v;
	int numero =0;
	//semelhante a uma matriz q preenche um quadrado
	//linha 2 -> imprimir 2 numeros, linha3-> imprimir 3 numeros....
	for(w = 0; w != n+1; w++){
		for(v = 0; v != w; v++){
			numero++;
		    printf("%d", numero);
		}
		printf("\n");
	}
}

void main(){
	int c = 4;
	triangulo(c);
}*/

//QUESTAO 4
/*
int tamString(char v[]){
	int i;
	for( i= 0; v[i] != '\0'; i++){
	}
	printf("\n %d",i-1);
	return i-1;
}

void main(){
	char texto[128];
	printf("digite seu texto\n");
	fgets(texto, 128, stdin);
	
	tamString(texto);
}*/

//QUESTAO 5 
/*
int tamString(char v[]){
	int i;
	for(i =0; v[i] != '\0'; i++){
	}
	return i -1;
}

void main(){
	printf("\n digite seu texto\n");
	char texto[128];
	fgets(texto, 128, stdin);
	int r = tamString(texto);
	int conversao;
	int i;
	
	for(i=0; i != r; i++){
		conversao = texto[i];
		conversao = conversao - 32; 
		printf("%c", conversao);
	}	
}*/

//QUESTAO 6
/*
int tamString(char v[]){
	int i;
	for(i =0; v[i] != '\0'; i++){
	}
	return i -1;
}

int ehPalindromo(char v[], int r){
	int i = 0;
	
	while(i != r-1){
		if(v[i] != v[r-1]){
		printf("\n NAO eh palindromo");
		return 1;
		}
		i++;
		r--;
	}
	printf("\n eh palindromo");
	return 0;
}

void main(){
	char texto[128];
	fgets(texto, 128, stdin);
	int r = tamString(texto);
	ehPalindromo(texto, r);
}*/

//QUESTAO 7
/*
int imprimeInverso(char v[], int n){
	int i;
	printf("\n");
	for(i = n; i!= -1; i--)
		printf("%c", v[i]);
	
}

int tamString(char v[]){
	int i;
	for(i =0; v[i] != '\0'; i++){
	}
	return i -1;
}

void main(){
	char texto[128];
	fgets(texto, 128, stdin);
	int r = tamString(texto);
	imprimeInverso(texto, r);
}*/

//QUESTAO 7.1 EXTRA 
/*
int inverteStr(char v[], int n){
	int i = 0;
	int j = n-1;
	char aux;
	while(i != j){
		aux = v[i];
		v[i] = v[j];
		v[j] = aux;
		
		i++;
		j--;
	}
	
	int w;
	for(w = 0; w < n; w++){
		printf("%c", v[w]);
	}
}

void main(){
	char vetor[5] = {"amor"};
	int n = 5;
	inverteStr(vetor,n);
}*/

//QUESTAO 8

int abreviatura(char v[]){
	int i;
	int conversao;
	for(i = 0; v[i] != '.'; i++){
		conversao = v[i];
		if(conversao >= 65 && conversao <=90){
			printf("%c.", conversao);
		}
	}
}

void main(){
	char texto[128];
	fgets(texto, 128, stdin);
	
	abreviatura(texto);
}
		
		