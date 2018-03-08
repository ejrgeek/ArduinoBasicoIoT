#include <stdio.h>

int main(){
	
	float num1, num2;
	
	printf("Escreva 2 numeros: ");
	scanf("%f %f", &num1, &num2);
	
	if(num1 > num2){
		printf("Maior %.1f\nMenor %.1f", num1, num2);
	}else if(num2 > num1){
		printf("Maior %.1f\nMenor %.1f", num2, num1);
	}else{
		printf("Iguais");
	}
	
return 0;
}
