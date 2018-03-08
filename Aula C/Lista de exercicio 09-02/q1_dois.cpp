#include <stdio.h>
int main(){char pal; int num;puts("Escreva um caractere: ");scanf("%s", &pal);if (pal >= 'a' && pal <= 'z'){printf("Eh Minuscula");}else if(pal >= 'A' && pal <= 'Z'){printf("Eh Maiuscula");}else if(pal >= '0'){printf("Eh Numeral");}else{printf("Nenhum dos tipos anteriores");}return 0;}
