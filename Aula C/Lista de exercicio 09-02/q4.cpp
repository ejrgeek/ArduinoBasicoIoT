#include <stdio.h>

int main(){

	int ano, mes;

	printf("Digite um ano: ");
	scanf("%d", &ano);

	if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0 ){

		printf("Digite um numero de 1 a 12 e veja detalhes: ");
		scanf("%d", &mes);

		switch(mes){
			case 2:
				printf("Fevereiro\nPossue 29 dias");
				break;
		}
	}else{

		printf("Digite um numero de 1 a 12 e veja detalhes: ");
		scanf("%d", &mes);

		switch(mes){
			case 2:
				printf("Fevereiro\nPossue 28 dias");
				break;
		}
	}

	switch(mes){
			case 1:
				printf("Janeiro\nPossue 31 dias");
				break;
			case 3:
				printf("Marco\nPossue 31 dias");
				break;
			case 4:
				printf("Abril\nPossue 30 dias");
				break;
			case 5:
				printf("Maio\nPossue 31 dias");
				break;
			case 6:
				printf("Junho\nPossue 30 dias");
				break;
			case 7:
				printf("Julho\nPossue 31 dias");
				break;
			case 8:
				printf("Agosto\nPossue 31 dias");
				break;
			case 9:
				printf("Setembro\nPossue 30 dias");
				break;
			case 10:
				printf("Outubro\nPossue 31 dias");
				break;
			case 11:
				printf("Novembro\nPossue 30 dias");
				break;
			case 12:
				printf("Dezembro\nPossue 31 dias");
				break;
		}

return 0;
}
