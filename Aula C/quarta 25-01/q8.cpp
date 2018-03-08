#include <stdio.h>
#include <string.h>

int main (){

	char cap[20];
	
	printf("Diga a capital do Brasil: ");
	scanf("%s", &cap);
	
	strlwr(cap);
	
	if(!strcmp(cap, "brasilia")){
		printf("Acertou");
	}else{
		printf("Errou");
	}
	
return 0;
}
