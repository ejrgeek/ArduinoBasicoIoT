#include <stdio.h>
int main(){
	
	int x, aux;
	
	printf("Escreva o numero X: ");
	scanf("%d", &x);
	printf("Divisores > ");
	for(int i=1; i<x; i++){
		if (x%i==0){
			printf("%d ", i);
			aux+=i;	
		}
	}
	if (aux == x){
		printf("\n%d Eh Numero Perfeito", x);
	}else{
		printf("\n%d Nao Eh Numero Perfeito", x);
	}
return 0;
}
