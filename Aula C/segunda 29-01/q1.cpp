#include <stdio.h>

int main(){
	
	int num, aux;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	for(aux=1; aux<=num; aux++){
		if(num%aux==0){
			printf("%3d", aux);
		}
	}else{
		printf("Entreda errada");
	}

return 0;
}
