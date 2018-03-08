#include <stdio.h>
#include <math.h>

int main(){
	
	int m, n, x;
	
	printf("Numero e Expoente (M N): ");
	scanf("%d %d", &m, &n);
	x = m;
	for(int i=2; i<=n; i++ ){
		x = x * m;
	}
	printf("%d", x);
	
return 0;
}
