#include <stdio.h>
#include <math.h>

int main(){
	
	int a, b, c, auxP;
	
	printf("Digite os valores de A, B e C (respectivamente separados por espaco) para a formula de Bhaskara: ");
	scanf("%d %d %d", &a, &b, &c);
	
	auxP = pow(b, 2);
	auxP = auxP - 4*a*c;
	
	if (auxP > 0){
		printf("Possue 2 raizes");
	}else if(auxP < 0){
		printf("Nao possue raiz");
	}else if(auxP == 0){
		printf("Possue apenas 1 raiz");
	}

return 0;
}
