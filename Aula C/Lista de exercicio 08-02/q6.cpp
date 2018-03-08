#include <stdio.h>

int main(){
	
	int x,y;
	
	printf("Digite o ponto X e Y (respectivamente separado por espaco): ");
	scanf("%d %d", &x, &y);
	
	if(x > 0 && y > 0){
		printf("Pertence ao 1 Quandrante");
	}else if(x > 0 && y < 0){
		printf("Pertence ao 2 Quadrante");
	}else if(x < 0 && y < 0){
		printf("Pertence ao 3 Quadrante");
	}else if(x < 0 && y > 0){
		printf("Pertence ao 4 Quadrante");
	}else if(x == 0 && y == 0){
		printf("Ponto Origem");
	}else if(x == 0 & y != 0 || x != 0 && y == 0){
		printf("Possue dois quadrantes");
	}

return 0;
}
