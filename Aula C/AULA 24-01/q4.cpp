#include <stdio.h>

int main(){
	
	int valorAula, numAula, sal;
	
	printf("Valor da Aula: ");
	scanf("%d", &valorAula);
	
	printf("Numero de Aulas; ");
	scanf("%d", &numAula);
	
	sal = (valorAula*numAula)*0.92;
	
	printf("Salario: %d", sal);
	
return 0;
}
