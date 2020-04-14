#include <stdio.h>
#include <string.h>

int main(){
	char string[23];
	fgets(string,23,stdin);	//abro teclado
	
	for(int i=0; string[i]!='\0'; i++){
		printf("%d ", string[i]);
	}
}