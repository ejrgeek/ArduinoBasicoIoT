#include <stdio.h>
int main (){
	int num;
	
	printf("Digite um numero; ");
	scanf("%d", &num);
	
	if(num > 0){
		printf("Inverso: %d", num-(num*2));
	}else{
		printf("Numero; %d", num);
	}
	
return 0;
}
