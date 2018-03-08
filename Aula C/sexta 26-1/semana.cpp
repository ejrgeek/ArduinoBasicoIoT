#include <stdio.h>
#include <math.h>
 
 int main (){
 	
 	int num; 	
 	printf("Escolha de 1 a 7: ");
 	scanf("%d", &num);
 	
 	switch(num){
	 	 	
	 	case 1:
		 	printf("Voce escolheu Domingo ");
			break;
			
		case 2:
			printf("Voce escolheu Segunda ");
			break;
			
		case 3:
			printf("Voce escolheu Terca ");
			break;
			
		case 4:
			printf("Voce escolheu Quarta ");
			break;
			
		case 5:
			printf("Voce escolheu Quinta ");
	 		break;
	 		
	 	case 6:
			printf("Voce escolheu Sexta ");
	 		break;
	 		
	 	case 7:
			printf("Voce escolheu Sabado ");
	 		break;
	 		
	 	default:
	 		printf("Voce nao digitou um numero valido");
	 }
	 
return 0;	
 }
