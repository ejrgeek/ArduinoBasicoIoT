#include <stdio.h>

int main(){
	
	int numQ, num,  numMaior, numMenor, aux;
	
	printf("Quantos numeros voce quer digitar? ");
	scanf("%d", &numQ);
	
	numMaior = 0;
	numMenor = 1;
	
	for (aux=1; aux<=numQ; aux++){
			
		printf("Digire o %d numero: ", aux);
		scanf("%d", &num);
		
		if (numMaior <= num){
			numMaior = num;
		}else if(numMenor >= num || numMenor <= num){
			numMenor = num;
		}
	}
	
	printf("Maior numero: %d\nMenor Numero: %d", numMaior, numMenor);
	
	
	
	
return 0;
}
