#include <stdio.h>

int main(){
	
	float num;
	
	printf("Digite um numero: ");
	scanf("%f", &num);
	
	if(num > 20){
		printf("Metade eh: %.1f", num/2);
	}else{
		printf("Eh menor que 20");
	}
	
return 0;
}
