#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

//1. Faça um programa que peça dois números inteiros e gere os números inteiros que estão no intervalo entre eles.

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;
	
	printf("Digite 1 numero inteiro: \n");
	scanf("%i%i",&n1,&n2);
	fflush(stdin);
	
	while(n1 <= n2) {
		printf("  %i e ",n1);
		n1++;
	}
	
	return 0;
}
