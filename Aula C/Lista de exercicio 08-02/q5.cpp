#include <stdio.h>

int main(){
	
	int x,y,z;
	
	printf("Escreva 3 numeros diferentes separados por espaco: ");
	scanf("%d %d %d", &x, &y, &z);
	
	if ( x == y && x == z || x != y && x == z || x == y && x != z || x != y && y == z ){
		printf("Possui 2 ou 3 numeros iguais");
	}else{
		if(x > y && x < z || x < y && x > z){
			printf("%d nao eh o maior nem o menor", x);
		}else if(y > x && y < z || y < x && y > z){
			printf("%d nao eh o maior nem o menor", y);
		}else if(z > x && z < y || z < x && z > y){
			printf("%d nao eh o maior nem o menor", z);
		}
	}

return 0;
}
