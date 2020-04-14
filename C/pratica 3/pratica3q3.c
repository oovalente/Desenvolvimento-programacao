#include <stdio.h>

void main() {
	float m,n;
	scanf("%f %f", &m, &n);
	float r1 = m + n;
	float x= r1-m;
	
	float r2 = m+n;
	float y = r2 - n;
printf("\nx = %f\ny = %f", x, y);
}
