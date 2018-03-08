#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num, aux, auxT, nDiv, intM, intN, auxInt;
		
	printf("Digite o intervalo (M e N): ");
	scanf("%d %d", &intM, &intN);
	
	for (aux=intM; aux<=intN; aux++){
		nDiv=0;
				
		for(auxT=1; auxT<=aux; auxT++){
			if (aux % auxT == 0){
				nDiv++;
			}
		}
		if (nDiv == 2){
			printf("%d\n", aux);
		}
	}
return 0;
}
