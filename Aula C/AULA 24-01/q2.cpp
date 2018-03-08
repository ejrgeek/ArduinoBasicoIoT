#include <stdio.h>

main(){
	
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if (num >= 100 && num <= 999){
		printf("Numero: %d", ((num%100)-(num%10))/10);
	}else{
		printf("Nao tem 3 digitos");
	}
		
return 0;
}
