#include "estatistica.h"
#include <math.h> 

float cauchy(float x){
	return 1.0/(3.14 * (1.0 + pow(x, 2.0)));
}
	
float gumbel(float x, float u, float b){	
	float z;
	z = (x - u)/b; 
	return (1.0/b) * exp(-1.0 *(z + exp(-z)));
}

float laplace (float x, float u, float b){
	float z;
	z = (x - u)/b;
   return (1.0/(2.0 * b)) * exp(- fabs(z));
}



	

