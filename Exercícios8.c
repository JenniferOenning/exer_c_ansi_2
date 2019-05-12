#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

//8. Supondo que a popula��o de um pa�s A seja da ordem de 80.000 habitantes com uma taxa anual de crescimento de 3% e 
//que a popula��o do pa�s B seja, aproximadamente, de 200.000 habitantes com uma taxa de crescimento anual de 1,5%. 
//Fazer um programa que calcule e escreva o n�mero de anos necess�rios para que a popula��o do pa�s A ultrapasse 
//ou iguale a popula��o do pa�s B, mantidas essas taxas de crescimento.

int main (void) {
	
	setlocale(LC_ALL, "Portuguese");
	
	float a=80000, b=200000, i;
	i = 0;
	
	while (a < b) {
		
		a = a + a * 0.03;
		b = b + b * 0.015;
		i++;
		
	}
	printf("O pa�s A (menos) ficar� igual o pa�s B (maior) em %f anos pr�ximos.", i);
	
	getch();
	return 0;
}
