/*

2 - Escreva um programa que leia a base e a altura de um triangulo e calcule e imprima a sua area.


*/

#include <stdio.h>

main(){

	int base, altura, area;
	
	printf("Base: ");
	scanf("%d", &base);
	
	printf("Altura: ");
	scanf("%d", &altura);
	
	area = (base*altura)/2;
	
	printf("A Area eh: %d", area);
	
	

return 0;
}
