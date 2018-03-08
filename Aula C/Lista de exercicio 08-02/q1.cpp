#include <stdio.h>
#include <math.h>

int main(){
	
	int x1, x2, y1, y2;
	float x, y, dist;
	
	printf("Digite o X e Y do P separados por espaco: ");
	scanf("%d %d", &x1, &y1);
	
	printf("Digite o X e Y do Q separados por espaco: ");
	scanf("%d %d", &x2, &y2);
		
	x = pow(x1 - x2, 2);
	y = pow(y1 - y2, 2);
	
	dist = x + y;
	dist = sqrt(dist);
	
	printf("A distancia eh de %.3f", dist);
	
return 0;
}
