#include <stdio.h>

int main(){

	int ladrao1, ladrao2, ladrao3;
	
	printf("Votos do Candidato 1: ");
	scanf("%d", &ladrao1);
	printf("Votos do Candidato 2: ");
	scanf("%d", &ladrao2);
	printf("Votos do Candidato 3: ");
	scanf("%d", &ladrao3);
	
	if (ladrao1 > ladrao2 && ladrao2 > ladrao3){
		printf("Vencedor foi Candidato 1 com %d\n", ladrao1);
		printf("Menos votos foi o Cadidato 3 com %d\n", ladrao3);
	}else if (ladrao1 > ladrao3 && ladrao3 > ladrao2){
		printf("Vencedor foi Candidato 1 com %d\n", ladrao1);
		printf("Menos votos foi o Cadidato 2 com %d\n", ladrao2);
	}else if (ladrao2 > ladrao1 && ladrao1 > ladrao3){
		printf("Vencedor foi Candidato 2 com %d\n", ladrao2);
		printf("Menos votos foi o Cadidato 3 com %d\n", ladrao3);
	}else if (ladrao2 > ladrao3 && ladrao3 > ladrao1){
		printf("Vencedor foi Candidato 2 com %d\n", ladrao2);
		printf("Menos votos foi o Cadidato 1 com %d\n", ladrao1);
	}else if (ladrao3 > ladrao2 && ladrao2 > ladrao1){
		printf("Vencedor foi Candidato 3 com %d\n", ladrao3);
		printf("Menos votos foi o Cadidato 1 com %d\n", ladrao1);
	}else if (ladrao3 > ladrao1 && ladrao1 > ladrao2){
		printf("Vencedor foi Candidato 3 com %d\n", ladrao3);
		printf("Menos votos foi o Cadidato 2 com %d\n", ladrao2);
	}
return 0;
}
