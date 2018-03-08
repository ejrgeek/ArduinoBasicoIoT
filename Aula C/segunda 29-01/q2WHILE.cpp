#include <stdio.h>
#include <stdlib.h> 

int mmc(int num1, int num2, int num3){
	int aux = 1;
	
	while (aux%num1 || aux%num2 || aux%num3)
		aux++;
	return aux; 
}

int main(){
	
	int num1, num2, num3, MMC;
	
	printf("Digite 3 numeros separados por espaco: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	MMC = mmc(num1, num2, num3);
	printf("O MMC dos numeros %d, %d e %d eh %d", num1, num2, num3, MMC);
	
return 0;	
}
