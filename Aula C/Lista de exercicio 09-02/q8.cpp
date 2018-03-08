#include <stdio.h>
#include <math.h>
int main(){
	int nU, nD, nT, nQ, auxPA, auxPG;
	
	printf("Escreva quatro numeros (separados por espcao): ");
	scanf("%d %d %d %d", &nU, &nD, &nT, &nQ);
	
	auxPA = nD-nU;
	auxPG = nD/nU;
	
	if(nT-nD == auxPA){
		if(nQ-nT == auxPA){
			printf("Eh uma Prograssao Aritmetica\n");
		}else{
			printf("Nao eh uma Prograssao Aritmetica\n");
		}
	}else if(nT-nD != auxPA){
		printf("Nao eh uma Prograssao Aritmetica\n");
	}
	
	if(nT/nD == auxPG){
		if(nQ/nT == auxPG){
			printf("Eh uma Prograssao Geometrica\n");
		}else{
			printf("Nao eh uma Prograssao Geometrica\n");
		}
	}else if(nT/nD != auxPG){
		printf("Nao eh uma Prograssao Geometrica\n");
	}
	
return 0;
}
