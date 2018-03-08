#include <stdio.h>

int main(){
	
	int x, y;
	
	printf("Digite as cordenadas X e Y (respectivamente separando por espaco): ");
	scanf("%d %d", &x, &y);
	
	if (y ==(2*x) + 1){
		printf("Pertence a reta");
	}else if(y != (2*x) + 1){
		printf("Nao pertence a reta");
	}

return 0;
}
