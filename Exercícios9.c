#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

//9. Faça um programa que calcule e mostre a soma dos números pares entre 100 e 200 (inclusive). 
//O usuário deve ter a opção de repetir quantas vezes quiser esta operação.

int main (void) {
	
	int n,soma,par=2,i=0;

    printf("Digite um numero inteiro: ");
    scanf("%i",&n);
    
    while(i <= n){

    	i = i + 2;
    	soma = soma + par;
    	par = par + 2;
    }
    printf("A soma dos numeros pares e: %i",soma);
    
    
    getch ();
    return 0;
}
