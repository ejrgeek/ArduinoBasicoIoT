/*

4 - Escreva um progarma que leia o valor de dois angulos internos de um tringulo e calculo o terceiro angulo.

*/

#include <stdio.h>

int main (){
	
	int angulo1, angulo2, angulo3;
	
	printf("Angulo 1: ");
	scanf("%d", &angulo1);
	
	printf("Angulo 2: ");
	scanf("%d", &angulo2);
	
	angulo3 = angulo1+angulo2;
	angulo3 = 180 - angulo3;
	
	printf("O anglulo 3 eh: %d", angulo3);
return 0;
}
