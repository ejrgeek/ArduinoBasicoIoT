#include <stdio.h>
#include <math.h>

int main(){
	
	int a, b, c, x1, x2, auxP, auxR;
	
	printf("Digite os valores de A, B e C (respectivamente separados por espaco) para a formula de Bhaskara: ");
	scanf("%d %d %d", &a, &b, &c);
	
	auxP = pow(b, 2);
	auxP = auxP - 4*a*c;
	
	if (auxP > 0){
		
		x1 = -b + sqrt(auxP)/2*a;
		x2 = -b - sqrt(auxP)/2*a;
		
		printf("Raiz 1 %d\n", x1);
		printf("Raiz 2 %d\n", x2);
		
	}else if(auxP < 0){
		printf("Nao possue raiz");
	}else if(auxP == 0){
		x1 = -b/2*a;
		printf("Raiz 1 %d\n", x1);
	}

return 0;
}
