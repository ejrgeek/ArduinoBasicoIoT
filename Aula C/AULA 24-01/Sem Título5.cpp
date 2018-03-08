/*

3 - Escreva um programa que leia o valor da hipotenusa e de um cateto e descubra o valor do segundo cateto deste triangulo retangulo.

*/

#include <stdio.h>
#include <math.h>
#include <conio.h>


int main(){
	
	int hipotenusa, cateto1, cateto2;
	
	printf("Hipotenusa: ");
	scanf("%d", &hipotenusa);
	
	printf("Cateto1: ");
	scanf("%d", &cateto1);
	
	cateto2 = sqrt((hipotenusa*hipotenusa)-(cateto1*cateto1));
	
	printf("O Cateto 2 eh: %d", cateto2);
	
return 0;	
}
