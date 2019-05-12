#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

//8. Supondo que a população de um país A seja da ordem de 80.000 habitantes com uma taxa anual de crescimento de 3% e 
//que a população do país B seja, aproximadamente, de 200.000 habitantes com uma taxa de crescimento anual de 1,5%. 
//Fazer um programa que calcule e escreva o número de anos necessários para que a população do país A ultrapasse 
//ou iguale a população do país B, mantidas essas taxas de crescimento.

int main (void) {
	
	setlocale(LC_ALL, "Portuguese");
	
	float a=80000, b=200000, i;
	i = 0;
	
	while (a < b) {
		
		a = a + a * 0.03;
		b = b + b * 0.015;
		i++;
		
	}
	printf("O país A (menos) ficará igual o país B (maior) em %f anos próximos.", i);
	
	getch();
	return 0;
}
