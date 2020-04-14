#include <stdio.h>
#include <math.h>

int main() {
		float poupanca;
		poupanca=789.54;
		float juros;
		juros=0.0056;
		poupanca= poupanca + poupanca * juros;
		poupanca= poupanca +303.20;
		poupanca= poupanca + poupanca * juros;
		poupanca=poupanca - 58.25;
		poupanca= poupanca + poupanca * juros;
		printf("valor do 4 mes eh:%f \n", poupanca);
		return 0;	
	
	

}