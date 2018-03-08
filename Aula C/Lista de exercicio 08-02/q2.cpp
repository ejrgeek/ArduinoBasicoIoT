#include <stdio.h>

int main (){
	
	int certa, errada, branco, pont;
	
	printf("Digite o total de questoes certas, erradas e em branco (respectivamente separadas por espaco): ");
	scanf("%d %d %d", &certa, &errada, &branco);
	
	
	
	certa *= 5;
	errada *= 3;
	
	if (certa - errada <= 0 ){
		printf("Sua pontuacao final foi de 0 pontos");
	}else{
		pont = certa - errada;
		printf("Sua pontuacao final foi de %d pontos", pont);
	}

return 0;
}
