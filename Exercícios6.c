#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

//6. Fa�a um programa que calcule o valor total investido e o custo m�dio por CD.
// O usu�rio dever� informar a quantidade de CDs e o valor para em cada um.

int main (void){

	setlocale(LC_ALL, "Portuguese");
	
	int i = 1, precocd, investidocd, mediocd = 0, infocd;
	
	printf("Digite a quantidade de cds que vendeu: ");
    scanf("%i",&infocd);
    fflush(stdin);

	do {
		printf("Valor de cada cd: ");
	    scanf("%i",&precocd);
    	fflush(stdin);
    	
    	mediocd = mediocd + precocd;
    	i++;
    	
    }while (i <= infocd);
    
    investidocd = mediocd / infocd;
	printf("O custo m�dio por cd � de %2.i", investidocd);
	
	getch ();
	return 0;
}

