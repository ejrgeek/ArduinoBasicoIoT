#include <stdio.h>

int main(){
	
	int numF, numT1, numT2, numT3, aux;
	
	printf("Sequencia fibonacci: ");
	scanf("%d", &numF);

	numT1 = 0;
	numT2 = 1;
	numT3 = 0;
	
	for (aux=1; aux<=numF; aux++){
		
		numT3 = numT1+numT2;
		numT1 = numT2;
		numT2 = numT3;
		
		printf(" %d", numT1);

	}

return 0;
}
