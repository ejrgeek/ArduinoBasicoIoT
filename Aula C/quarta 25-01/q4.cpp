#include <stdio.h>

int main (){
	int num;
	
	printf("Digite um numero para saber se eh PAR ou IMPAR: ");
	scanf("%d", &num);
	
	if(num%2==0){
		printf("PAR");
	}else{
		printf("IMPAR");
	}
	
return 0;
}
