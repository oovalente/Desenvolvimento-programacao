#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//QUESTAO 1.1

typedef struct guerreiro{
	int ataque;
	int defesa;
	int carisma;
	int pontos_vida;
	int id_jogador;
}guerreiro;

//QUESTAO 1.2

int random(int min, int max){
	int x = max - min +1;
	return min + rand()%x;
}

int rolaDados(){
	int dado1 = random(1,6);
	int dado2 = random(1,6);
	int dado3 = random(1,6);
	//printf("\n D1=%d D2=%d D3=%d", dado1, dado2, dado3);
	int soma =dado1 + dado2 + dado3;
	//printf("\n soma=%d", soma);
	return soma;
}

//QUESTAO 1.3

void criaGuerreiro(guerreiro*g){
	g->ataque = rolaDados();
	g->carisma = rolaDados();
	g->defesa = rolaDados();
	printf("\n At.=%d  Car.=%d  Def.=%d", g->ataque, g->carisma, g->defesa);
	g->pontos_vida = (rolaDados()) + (rolaDados()) + (rolaDados());
	printf("\n p.vida = %d", g->pontos_vida);
}

//QUESTAO 1.4

int bonusCarisma(guerreiro*x){
	int bonus = 0;
	switch(x->carisma){
		case 18:
		bonus = x->carisma +3;
		break;
		case 17:
		case 16:
		bonus = x->carisma +2;
		break;
		case 15:
		case 14:
		bonus = x->carisma +1;
		break;
		case 7:
		case 6:
		bonus = x->carisma -1;
		break;
		case 5:
		case 4:
		bonus = x->carisma -2;
		break;
		case 3:
		bonus = x->carisma -3;
		
		break;
	}
	printf("\n bonus = %d", bonus);
	return bonus;
		
}

//QUESTAO 1.5

void ataca(guerreiro*A, guerreiro*B){
	int dano;
	int golpe;
	int escudo;
	golpe = A->ataque + bonusCarisma(A);
	printf("\n golpe = %d", golpe);
	escudo = B->defesa + bonusCarisma(B);
	printf("\n escudo = %d", escudo);
	dano = golpe - escudo;
	printf("\n dano = %d", dano);
	if(dano>0){
		B->pontos_vida=B->pontos_vida - dano;
		//printf("\n pontos de vida= %d", B->pontos_vida);
	}
	printf("\n pontos de vida= %d", B->pontos_vida);
}	
	
void main(){
	srand(time(NULL));
	//rolaDados();
	guerreiro x;
	guerreiro y;
	criaGuerreiro(&x);
	criaGuerreiro(&y);
	ataca(&x,&y);
}
	
	
	