#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

//2. Faça um programa que peça dois números inteiros e gere os números pares que estão no intervalo entre eles.

int main (void) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n;
	
	printf("Digite 2 números inteiros: \n");
	scanf("%i%i",&n1,&n2);
	fflush(stdin);
	
		for(n=n1;n< n2;n++){
	if(n % 2 == 0) {
		printf("  %i  ",n);
	}
}

	return 0;
}
