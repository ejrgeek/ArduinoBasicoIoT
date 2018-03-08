#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(){
	int x;
	
	printf("Escreva um numero para saber a raiz quadrada dele: ");
	scanf("%d", &x);
	x = sqrt(x);
	printf("Raiz Qadrada: %d", x);

return 0;
}
