#include <stdio.h>
#include <math.h>

int main(){
	
	int segundos, hora, min, seg;
	
	printf("Quantos segundos? ");
	scanf("%d", &segundos);

	hora = segundos / 3600;
	min = (segundos - (3600*hora))/60;
	seg = (segundos - (3600*hora)-(min*60));
	
	printf("%d hora(s), %d minuto(s) e %d segundo(s)", hora, min, seg);

return 0;
}

