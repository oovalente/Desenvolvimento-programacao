#include <stdio.h>
#include "estatistica.h"
#include <math.h> 

void main () {

float L1;
	L1 = cauchy(- 2.0);
	printf("\n cauchy eh %f", L1);

	
float L2;
	L2 = gumbel(0.0, 0.5, 2.0);
	printf("\n gumbel eh %f", L2);
	
float L3;
	L3 = laplace(-6, -5, 4);
	printf("\n laplace eh %f", L3);
}


	

