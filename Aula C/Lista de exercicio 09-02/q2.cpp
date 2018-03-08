#include <stdio.h>

int main(){
	
	int c, d, u, num;
	
	printf("Escreva um numero de 1 - 999: ");
	scanf("%d", &num);
	
	if(num >= 1 && num <= 999){
		
		c = (num/100)%10;
		d = (num%100)/10;
		u = num%10;
		
		if(c == 1){printf("C");}
		else if(c == 2){printf("CC");}
		else if(c == 3){printf("CCC");}
		else if(c == 4){printf("CD");}
		else if(c == 5){printf("D");}
		else if(c == 6){printf("DC");}
		else if(c == 7){printf("DCC");}
		else if(c == 8){printf("DCCC");}
		else if(c == 9){printf("CM");}
		
		if(d == 1){printf("X");}
		else if(d == 2){printf("XXX");}
		else if(d == 2){printf("XXX");}
		else if(d == 4){printf("XL");}
		else if(d == 5){printf("L");}
		else if(d == 6){printf("LX");}
		else if(d == 7){printf("LXX");}
		else if(d == 8){printf("LXXX");}
		else if(d == 9){printf("XC");}
		
		if(u == 1){printf("I");}
		else if(u == 2){printf("II");}
		else if(u == 2){printf("III");}
		else if(u == 4){printf("IV");}
		else if(u == 5){printf("V");}
		else if(u == 6){printf("VI");}
		else if(u == 7){printf("VII");}
		else if(u == 8){printf("VIII");}
		else if(u == 9){printf("IX");}
	}else{
		printf("Menor que 1 ou maior que 999");
	}
	
return 0;
}
