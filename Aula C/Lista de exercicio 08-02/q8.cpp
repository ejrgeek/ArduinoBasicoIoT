#include <stdio.h>

int main(){
	
	float gaso, alco;
	
	printf("Escreva um valor de 1 litro de Gasolina e Alcool (respectivamente separado por espacos): ");
	scanf("%d %d", &gaso, &alco);
	
	if (gaso*0.7 <= alco){
		printf("Abastecer com Gasolina");
	}else{
		printf("Abastecer com Alcool");
	}

return 0;
}
