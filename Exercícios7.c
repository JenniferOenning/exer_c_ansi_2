#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

//7. Fa�a um programa que gere a tabuada de 1 a 10 de qualquer n�mero. O usu�rio deve informar de qual n�mero deseja ver a tabuada.

main(void){
	
   int i,num,res;
   
   printf("Digite um numero entre 1 e 10 que queira na tabuada:");
   scanf("%d",&num);
   fflush(stdin);
   
   for (i=1; i<=10; i++){
   	
       printf("%d X %d = %d\n",num,i,num*i);
   }
}
