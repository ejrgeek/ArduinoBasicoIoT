#include <stdio.h>
int main(){
	
	int num1, num2, num3, mmC, aux;
	
	printf("Digite 3 numeros separados por espaco: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	mmC = num1*num2*num3;
	
	for (aux=1; aux<=mmC; aux++){
		if(aux%num1){
			aux++;
		}if(aux%num2){
			aux++;
		}if(aux%num3){
			aux++;
		}
	}

	printf("O MMC dos numeros %d, %d e %d eh %d", num1, num2, num3, aux);
	
return 0;	
}
