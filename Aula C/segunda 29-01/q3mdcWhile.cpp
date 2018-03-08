#include <stdio.h>
#include <stdlib.h> 

int main(){
	
	int num1, num2, num3, mdc;
	
	printf("Digite 3 numeros separados por espaco para ver o MDC: ");
	scanf("%d %d %d", &num1, &num2, &num3);
		
	mdc = num1%num2%num3;
	
	while(mdc!=0){
		num1 = num2;
		num2 = num3;
		num3 = mdc;
		mdc = num1%num2%num3;
	}
	printf("MDC eh: %d", num3);
	
return 0;
}
