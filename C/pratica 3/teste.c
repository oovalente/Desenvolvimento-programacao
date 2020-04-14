#include <stdio.h>

char troca(char x, char y){
	x = y;
	y = x;
}

void main (){
	char alomundo;
	char tchaumundo;
	char x = alomundo;
	char y = tchaumundo;
	troca(x, y);
	printf("%c %c", x, y);
}