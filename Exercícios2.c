#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

//2. Fa�a um programa que pe�a dois n�meros inteiros e gere os n�meros pares que est�o no intervalo entre eles.

int main (void) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n;
	
	printf("Digite 2 n�meros inteiros: \n");
	scanf("%i%i",&n1,&n2);
	fflush(stdin);
	
		for(n=n1;n< n2;n++){
	if(n % 2 == 0) {
		printf("  %i  ",n);
	}
}

	return 0;
}
