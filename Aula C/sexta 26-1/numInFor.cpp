#include <stdio.h>

int main (){
	
	int num, aux;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	for(aux = 0; aux<=num; aux++){
		printf("%d\n", aux);
	}
	
return 0;
}
