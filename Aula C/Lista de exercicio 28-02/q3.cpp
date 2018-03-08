#include <stdio.h>

int main(){
	
	int num, rPA, n, n1;
	
	printf("Primeiro Termo da PA: ");
	scanf("%d", &num);
	
	printf("Razao da PA: ");
	scanf("%d", &rPA);
	
	printf("Numero de Termos: ");
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++){
		printf("%d ", num);
		num = num + rPA;
	}
	
return 0;
}
