#include <stdio.h>
int main (){
	
	int idade;
	int i;
	idade = 26;
	
	printf ("Idade: %d \nNova idade: ", idade);
	scanf ("%d", &idade);
	printf ("Nova idade recebida: %d", idade);

	for (i=1;  i > 0; i++ ){
		printf ("Felipe eh fresgo \n");
		i++;
	}
return 0;
}
