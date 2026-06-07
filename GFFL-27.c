#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("\n* Aluno: Gabriel Feliciano de Freitas Leal - RA 0026908     *");
	printf("\n* Programa GFFL-27 -    Tabuada de um número                *");
	printf("\n*************************************************************");
	
	int n, i;
	
	 printf("\n\nDigite um numero: ");
	 scanf("%d", &n);
	 
	  for (i = 1; i <= 10; i++){
	  	printf("%d x %d = %d\n", n, i, n * i);
	  	
	  } 
} 
