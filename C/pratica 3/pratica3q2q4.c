#include <stdio.h>

void soma1(int *x){
		*x +=1;
}

void main (){
	
	int x = 0;
	int *endx = &x;
	soma1(endx);
	printf("%d", x);
}
