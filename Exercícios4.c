#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

//4. Fa�a um programa que calcule e mostre a m�dia bimestral da turma. 
//O usu�rio deve informar a quantidade de notas, bem como cada nota.

int main (void) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int alu, nota, i = 0;
	
	printf("Qual a quantidade de alunos na turma?: ");
    scanf("%i",&alu);
    fflush(stdin);

	do {
		printf("Digite a nota: ");
	    scanf("%i",&nota);
    	fflush(stdin);
    	
    	i++;	
		
	}while (nota <= 10) {
		
		printf("A m�dia bimestral da turma e: %i", alu);
	}
	
	return 0;
}
