#include <stdio.h>

int main(){

	int numQ, num, num1, num2, num3, aux, aux2;

	printf("Quantos numeros voce quer digitar? ");
	scanf("%d", &numQ);

	for (aux=1; aux<=numQ; aux++){

		printf("Digire o %d numero: ", aux);
		scanf("%d", &num);

		num1 = num;
		num2 = num1;
		num3 = num2;
		aux2 = num3;

		printf("Sequencia correta %d", num1);

	}
return 0;
}
