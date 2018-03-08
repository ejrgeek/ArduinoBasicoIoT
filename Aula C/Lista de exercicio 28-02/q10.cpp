#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int j,num,i;

	printf("Digite um numero:");
	scanf("%d",&num);
	for(j=1;j<=num;i++){
		for(i=1;i<=num;i++){
			printf("*");
		}
		printf("\n");
	num=num-1;
	}
return 0;
}
