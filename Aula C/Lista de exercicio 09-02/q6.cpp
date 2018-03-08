#include <stdio.h>

int main(){
	
	int num, mil, cent, dez, uni;
	
	printf("Numero: ");
	scanf("%d", &num);
	
	mil = (num-(num%1000))/1000;
	cent = ((num-(num%100))%1000)/100;
	dez = ((num%100)-(num%10))/10;
	uni = (num%10);
	
	if (num >=1000 && num <= 9999){
		if (mil==uni && cent==dez){
			printf("Eh palindromo");
		}else{
			printf("Nao eh palindromo");
		}
	}else{
		printf("O numero nao tem 4 digitos");
	}

return 0;
}
