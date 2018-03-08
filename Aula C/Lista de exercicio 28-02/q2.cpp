#include <stdio.h>

int main(){
	
	int m, n, x;
	
	printf("Escreva o intervalo (M e N) e o numero X: ");
	scanf("%d %d %d", &m, &n, &x);
	printf("Divisores > ");
	for(int i=m; i<=n; i++){
		if (x%i==0){
			printf("%d ", i);
		}
	}
return 0;
}
