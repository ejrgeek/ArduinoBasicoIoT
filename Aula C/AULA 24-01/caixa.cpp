#include <stdio.h>

int main (){
	
	int notas[5] = {100, 50, 10, 1}, valor, qtd, aux;
	
	printf("_________________________\n");
	printf("|$$$$$$$$$$$$$$$$$$$$$$$|\n");
	printf("|$$                   $$|\n");
	printf("|$$     BEM-VINDO     $$|\n");
	printf("|$$ AO CAIXA DO BANCO $$|\n");
	printf("|$$   Mr. Jardelson   $$|\n");
	printf("|$$                   $$|\n");
	printf("|$$$$$$$$$$$$$$$$$$$$$$$|\n");
	printf("-------------------------\n");
	printf("Sacar: ");
	scanf("%d", &valor);
	
	for (aux = 0; aux < 4; aux++){
		qtd = valor/notas[aux];
		printf("Voce recebera %d nota(s) de  R$%5.d real(is)\n",qtd,notas[aux]);
		valor = valor % notas[aux];	
	}

return 0;
}
