#include <stdio.h>

int main(){
	
	int num; 	
 	printf("Escolha de 1 a 7: ");
 	scanf("%d", &num);
 	
 	if (num == 1){
 		printf("Voce escolheu Domingo");
	 }else if (num == 2){
 		printf("Voce escolheu Segunda");
	 }else if (num == 3){
 		printf("Voce escolheu Terca");
	 }else if (num == 4){
 		printf("Voce escolheu Quarta");
	 }else if (num == 5){
 		printf("Voce escolheu Quinta");
	 }else if (num == 6){
 		printf("Voce escolheu Sexta");
	 }else if (num == 7){
 		printf("Voce escolheu Sabado");
	 }else{
	 	printf("Voce nao digitou um numero valido");
	 }
	
	
return 0;
}
