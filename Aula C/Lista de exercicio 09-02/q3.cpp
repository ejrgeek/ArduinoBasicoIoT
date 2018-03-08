#include <stdio.h>

int main(){

	int mes;

	printf("Digite um numero de 1 a 12 e veja detalhes: ");
	scanf("%d", &mes);

	switch(mes){
		case 1:
			printf("Janeiro\nPrimeiro Trimestre");
			break;
		case 2:
			printf("Fevereiro\nPrimeiro Trimestre");
			break;
		case 3:
			printf("Marco\nPrimeiro Trimestre");
			break;
		case 4:
			printf("Abril\nSegundo Trimestre");
			break;
		case 5:
			printf("Maio\nSegundo Trimestre");
			break;
		case 6:
			printf("Junho\nSegundo Trimestre");
			break;
		case 7:
			printf("Julho\nTerceiro Trimestre");
			break;
		case 8:
			printf("Agosto\nTerceiro Trimestre");
			break;
		case 9:
			printf("Setembro\nTerceiro Trimestre");
			break;
		case 10:
			printf("Outubro\nQuarto Trimestre");
			break;
		case 11:
			printf("Novembro\nQuarto Trimestre");
			break;
		case 12:
			printf("Dezembro\nQuarto Trimestre");
			break;
	}

return 0;
}
