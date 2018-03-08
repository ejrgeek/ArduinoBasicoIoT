#include <stdio.h>
#include <math.h>
 
 int main (){
 	
 	int num; 	
 	
 	printf("@@@@@@@@@@@@@@@@@@@@@@\n");
 	printf("@     CANDIDATOS     @\n");
 	printf("@ 11 - Fernando      @\n");
 	printf("@ 20 - Cazuza        @\n");
 	printf("@ 22 - Erlon         @\n");
 	printf("@ 24 - Jardel        @\n");
 	printf("@ 69 - Felipe        @\n");
 	printf("@@@@@@@@@@@@@@@@@@@@@@\n");
 	printf("Escolha um candidato: ");
 	scanf("%d", &num);
 	
 	switch(num){
	 	 	
	 	case 24:
	 		printf("     _____________________\n");
 			printf("    / __________          |\n");
 			printf("   /  | Jardel |   . . .  |\n");
 			printf("  /   |   24   |   . . .  |\n");
 			printf(" /    ----------   . . .  |\n");
 			printf(" --------------------------\n");
		 	printf("Voce escolheu o candidato Jardel Numero %d", num);
			break;
			
		case 69:
			printf("     _____________________\n");
 			printf("    / __________          |\n");
 			printf("   /  | Felipe |   . . .  |\n");
 			printf("  /   |   69   |   . . .  |\n");
 			printf(" /    ----------   . . .  |\n");
 			printf(" --------------------------\n");
		 	printf("Voce escolheu o candidato Felipe Numero %d", num);
			break;
			
		case 22:
			printf("     _____________________\n");
 			printf("    / __________          |\n");
 			printf("   /  |  Erlon |   . . .  |\n");
 			printf("  /   |   22   |   . . .  |\n");
 			printf(" /    ----------   . . .  |\n");
 			printf(" --------------------------\n");
		 	printf("Voce escolheu o candidato Erlon Numero %d", num);
			break;
			
		case 11:
			printf("     _____________________\n");
 			printf("    / __________          |\n");
 			printf("   /  | Fernan |   . . .  |\n");
 			printf("  /   |   11   |   . . .  |\n");
 			printf(" /    ----------   . . .  |\n");
 			printf(" --------------------------\n");
		 	printf("Voce escolheu o candidato Fernando Numero %d", num);
			break;
			
		case 20:
			printf("     _____________________\n");
 			printf("    / __________          |\n");
 			printf("   /  | Cazuza |   . . .  |\n");
 			printf("  /   |   20   |   . . .  |\n");
 			printf(" /    ----------   . . .  |\n");
 			printf(" --------------------------\n");
		 	printf("Voce escolheu o candidato Cazuza Numero %d", num);
	 		break;
	 		
	 	default:
	 		printf("Voce nao digitou um numero valido");
	 }
return 0;	
 }
