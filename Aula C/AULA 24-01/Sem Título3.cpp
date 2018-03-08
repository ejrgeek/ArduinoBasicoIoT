/*

1 - Escreva um programa que leia a idade e o nome de uma pessoa e imprima seu nome e usa idade, usa o seguindo texto: "Meu nome é fulano e minha idade é tal".


*/

#include <stdio.h>
int main (){
	
	int idade;
	char nome[20];
	
	printf("Seu nome: ");
	scanf("%s", &nome);
	
	printf("Sua idade: ");
	scanf("%d", &idade);
	
	printf("Meu nome eh %s e minha idade eh %d", nome, idade);

return 0;
}
