#include <stdio.h>

int main(){
	
	int hora, minuto, fuso;
	
	printf("Hora e Minuto (separados por espaco respectivamente): ");
	scanf("%d %d", &hora, &minuto);
	
	if(hora >=0 && hora <= 24 && minuto >=0 && minuto <= 59){
		printf("Fuso horario: ");
		scanf("%d", &fuso);
		
		if(fuso > 0){
			hora+=fuso;
			if (hora == 24){
				if(minuto > 9){
					printf("Horario > 00:%d", minuto);
				}else if(minuto < 10){
					printf("Horario > 00:0%d", minuto);
				}
			}else if(hora > 24){
				hora = 24-hora;
				hora*= -1;
				if(minuto > 9){
					printf("Horario > 0%d:%d", hora, minuto);
				}else if(minuto < 10){
					printf("Horario > 0%d:0%d", hora, minuto);
				}
			}else if(hora >=10 && hora <= 23){
				if(minuto > 9){
					printf("Horario > %d:%d", hora, minuto);
				}else if(minuto < 10){
					printf("Horario > %d:0%d", hora, minuto);
				}
			}else if(hora >=0 && hora <=9){
				if(minuto > 9){
					printf("Horario > 0%d:%d", hora, minuto);
				}else if(minuto < 10){
					printf("Horario > 0%d:0%d", hora, minuto);
				}
			}
			
		}else if(fuso < 0){
			hora = -hora-fuso;
			
			if(hora < 0){
				hora *= -1;
				if(minuto > 9){
					printf("Horario > %d:%d", hora, minuto);
				}else if(minuto < 10){
					printf("Horario > %d:0%d", hora, minuto);
				}
			}else if(hora >=10 && hora <= 23){
				if(minuto > 9){
					printf("Horario > %d:%d", hora, minuto);
				}else if(minuto < 10){
					printf("Horario > %d:0%d", hora, minuto);
				}
			}else if(hora >=0 && hora <=9){
				if(minuto > 9){
					printf("Horario > 0%d:%d", hora, minuto);
				}else if(minuto < 10){
					printf("Horario > 0%d:0%d", hora, minuto);
				}
			}

		}else if(fuso == 0){
			printf("Fuso 0");
			if(hora >=10 && hora <= 23){
				if(minuto > 9){
					printf("Horario > %d:%d", hora, minuto);
				}else if(minuto < 10){
					printf("Horario > %d:0%d", hora, minuto);
				}
			}else if(hora >=0 && hora <=9){
				if(minuto > 9){
					printf("Horario > 0%d:%d", hora, minuto);
				}else if(minuto < 10){
					printf("Horario > 0%d:0%d", hora, minuto);
				}
			}
		}
	}else{
		printf("Dados invalidos:\n - A hora nao pode ser maior que 24 nem menor que 0\n - O minuto nao pode ser maior que 59 ou menor que 0");
	}

return 0;
}
