#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int n,i;
    char verbo[15];
    char radical[10];
    
	printf("Digite um verbo no indicativo: ");
	gets(verbo);
	n=strlen(verbo);
	strncpy(radical, verbo, n-2);
    printf("Radical do verbo: %s\n",radical);
    
	if (verbo[n-2]=='a'){
		printf("\nPresente:\n");
		printf("Eu %so\n",radical);
		printf("Tu %sas\n",radical);
		printf("Ele %sa\n",radical);
		
		printf("\nPreterito perfeito:\n");	
		printf("Eu %sei\n",radical);
		printf("Tu %saste\n",radical);
		printf("Ele %sou\n",radical);
		
		printf("\nFuturo do presente do modo indicativo:\n");
		printf("Eu %sarei\n",radical);
		printf("Tu %saras\n",radical);
		printf("Ele %sara\n",radical);
	}else if (verbo[n-2]=='e'){
		printf("\nPresente:\n");
		printf("Eu %so\n",radical);
		printf("Tu %ses\n",radical);
		printf("Ele %se\n",radical);
		
		printf("\nPreterito perfeito:\n");
		printf("Eu %si\n",radical);
		printf("Tu %seste\n",radical);
		printf("Ele %seu\n",radical);
		
		printf("\nFuturo do presente do modo indicativo:\n");
		printf("Eu %serei\n",radical);
		printf("Tu %seras\n",radical);
		printf("Ele %sera\n",radical);
	}else if (verbo[n-2]=='i'){
		printf("\nPresente:\n");
		printf("Eu %so\n",radical);
		printf("Tu %ses\n",radical);
		printf("Ele %se\n",radical);
			
		printf("\nPreterito perfeito:\n");
		printf("Eu %si\n",radical);
		printf("Tu %siste\n",radical);
		printf("Ele %siu\n",radical);
			
		printf("\nFuturo do presente do modo indicativo:\n");
		printf("Eu %sirei\n",radical);
		printf("Tu %siras\n",radical);
		printf("Ele %sira\n",radical);
	}
	
return 0;
}
