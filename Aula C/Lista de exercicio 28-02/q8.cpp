#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int aux, auxT, nDiv;

	for (aux=0; aux<=100; aux++){
		nDiv=0;
		
		for(auxT=1; auxT<=aux; auxT++){
			if (aux % auxT == 0){
				nDiv++;
			}
		}
		if (nDiv == 2){
			printf("%d\n", aux);
		}
	}

return 0;
}

