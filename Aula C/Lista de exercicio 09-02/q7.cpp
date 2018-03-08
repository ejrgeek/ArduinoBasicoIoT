#include <stdio.h>

int main (){
	
	int notas[5] = {100, 50, 20, 10}, valor, qtd, aux;
	
	printf("_________________________\n");
	printf("|@@@@@@@@@@@@@@@@@@@@@@@|\n");
	printf("|@@                   @@|\n");
	printf("|@@     BEM-VINDO     @@|\n");
	printf("|@@ AO CAIXA DO BANCO @@|\n");
	printf("|@@  Mr. Jardelson 2  @@|\n");
	printf("|@@                   @@|\n");
	printf("|@@@@@@@@@@@@@@@@@@@@@@@|\n");
	printf("-------------------------\n");
	printf("Sacar: ");
	scanf("%d", &valor);
	
	if (valor <= 1000){
		if(valor % 10 != 0){
			printf("Impossivel realizar operacao, apenas valores terminados em 0");
		}else{
			for (aux = 0; aux < 4; aux++){
				qtd = valor/notas[aux];
				printf("Voce recebera %d nota(s) de  R$%5.d real(is)\n",qtd,notas[aux]);
				valor = valor % notas[aux];
			}
		}
	}
return 0;
}
