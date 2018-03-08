#include <stdio.h>

int main(){
	
	int num, aux,count,count2;
	count = 1;
	
	printf("Escreva um numero: ");
	scanf("%d", &num);
	
	for (aux=1; aux<=num; aux++){
		printf("%d\n", aux);
		count = aux;
		count2 *= count;	
	}
	if (num > 16 && num < 33){
		printf("Fatorial em Notacao Cientifica: %e", count2);
	}else{
		printf("Fatorial eh: %d", count2);
	}

return 0;
}
