#include <stdio.h>

void main() {
	int x = 0;
	int *end_x = &x;
	*end_x = x + 3;
	
	printf("%d", x);
}
