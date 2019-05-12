#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

//5. Faça um programa que calcule o número médio de alunos por turma. 
//Para isto, peça a quantidade de turmas e a quantidade de alunos para cada turma. As turmas não podem ter mais de 40 alunos.

int main (void) {

	setlocale(LC_ALL, "Portuguese");
	int i = 1,alunos, turma, mediaf, media = 0;
	
	printf("Escreva a quantidade de turmas: ");
	scanf("%i", &turma);
	fflush(stdin);
	
	do {
		
		printf("Escreva quantos alunos em cada turma: ");
		scanf("%i", &alunos);
		fflush(stdin);
		
		media = media + alunos;
		
		i++;
		
	}while( i <= turma);
	
		mediaf = media / turma;
		printf("O número médio de alunos por turma é %i", mediaf);
	
	getch();
	return 0;
}
