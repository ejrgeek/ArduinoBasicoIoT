#include <stdio.h>

int main (){
	
	int dividendo,divisor,resto,quociente;
	
	printf("Dividendo: ");
	scanf("%d", &dividendo);
	
	printf("Divisor: ");
	scanf("%d", &divisor);
	
	if (divisor > dividendo){
		printf("Divisor eh maior que o dividendo\n");
	}else{
		resto = dividendo % divisor;
		quociente = dividendo / divisor;
	}
	printf("-----------------\n");
	printf("Divisor: %d\n", divisor);
	printf("Dividendo: %d\n", dividendo);
	printf("Quociente: %d\n", quociente);
	printf("Resto: %d\n", resto);
	
	
	
return 0;	
} 
