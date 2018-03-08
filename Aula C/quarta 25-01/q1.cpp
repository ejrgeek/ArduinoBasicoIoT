#include <stdio.h>

int main(){
	
	int num, aux;
	
	printf("Numero: ");
	scanf("%d", &num);
	
	if (num > 100 && num < 999){
		
		do{
			aux = num % 10;
			printf("%i", aux);
			num /= 10;
		} while (num != 0);
			printf("\n");
		
	}else if(num > -999 && num < -100){
		num = num * -1;
		
		printf("-");
		
		do{
			aux = num % 10;
			printf("%i", aux);
			num /= 10;
		} while (num != 0);
			printf("\n");
			
	}else if(num == 000 || num == -000){
		printf("%d", num);
	}else{
		printf("Nao tem 3 digitos");
	}
	
return 0;
}
