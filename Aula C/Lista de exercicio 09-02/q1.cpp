#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <cctype>

int main(){
	
	char pal;
	printf("Digite um Caractere: ");
	scanf("%s", &pal);
	
	if (isalpha(pal)){
		if(islower(pal)){
			printf("Letra Minuscula");
		}else{
			printf("Letra Maiuscula");
		}
	}else if(isdigit(pal)){
		printf("Um Numeral");
		}else{
			printf("Nenhum dos Tipos Anteriores");
	}
	
return 0;
}
