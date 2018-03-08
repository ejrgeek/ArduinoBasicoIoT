#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(){
	
	int base, exp;
	
	printf("Base e Expoente: ");
	scanf("%d %d", &base, &exp);
	base = pow(base, exp);
	printf("Resultado: %d", base);

return 0;
}
