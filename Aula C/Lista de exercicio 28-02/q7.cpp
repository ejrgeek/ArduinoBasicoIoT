#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int numF, numP, numT1, numT2, numT3, aux, auxCVV = 1;
	
	printf("Sequencia fibonacci: ");
	scanf("%d", &numF);
	printf("Digite um provavel numero da sequecia fibonacci: ");
	scanf("%d", &numP);

	numT1 = 0;numT2 = 1;numT3 = 0;
	
	for (aux=1; aux<=numF; aux++){
		
		numT3 = numT1+numT2;numT1 = numT2;numT2 = numT3;
		if (numT1 <= numF){
			printf("%d ", numT1);
		}
		if (numP == numT1){
			auxCVV += 1;
		}else{
			auxCVV == 0;
		}
	}
	if(auxCVV > 1){
		printf("\n%d Pertence a sequencia", numP);
	}else{
		printf("\n%d Nao pertence a sequencia", numP);
	}
return 0;
}
