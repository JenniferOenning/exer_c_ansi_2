#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

//10. Fa�a um programa que pe�a dois n�meros inteiros (base e expoente), 
//calcule e mostre o primeiro n�mero elevado ao segundo n�mero.

int main (void) {
	
	float bs, ex, pot;
		
	while(bs >= 1);	
		
	printf("informe o numero de base: ");
	scanf("%f", &bs);
	fflush(stdin);

	printf("informe o numero do exponte: ");
	scanf("%f", &ex);
	fflush(stdin);
	
	pot = pow (bs, ex);
	
	printf("%2.f", pot);
	
	
	getch();
	return 0;
}
