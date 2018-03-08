#include <stdio.h>
							// I N C O M P L E T O
int main(){
	
	int M, N, x, y;
	
 	printf("Intervalo (M e N): ");
 	scanf("%d %d", &M, &N);
 	
	printf("Sequencia Logica de X fixo e Y mutavel: \n");
	for(int i=M; i<=N; i++){
		if(i % 2 == 0){
			x = M;
			if(x % 2 != 0){
				x+=1;
			}
			y = i;
			y + 2;
			printf("%d %d\n", x, y);
		}
	}
	printf("\n");
	for(int aux=M; aux<=N; aux++){
		if(aux % 2 == 0){

			x = aux;
			if(x % 2 != 0){
				x+=3;
			}
		
			y = aux;
			y + 2;
			printf("%d %d\n", x, y);
		}
	}
	
return 0;
}
