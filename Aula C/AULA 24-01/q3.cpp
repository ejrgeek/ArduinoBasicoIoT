#include <stdio.h>

int main(){
	
		int n1, n2, n3, n4, num;
		
		printf("Numeros separados por espaco: ");
		scanf("%d %d %d %d", &n1,&n2,&n3,&n4);
		
		n1 *= 1;
		n2 *= 2;
		n3 *= 3;
		n4 *= 4;
		
		num = (n1+n2+n3+n4)/10;
		
		printf("%d", num);
	
return 0;
}
